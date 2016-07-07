#include "MainWindow.h"
#include <math.h> 
#include <sstream>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	m_fileSelector = 0;
	CalcPoints();
	m_timeframeSlider = new QSlider(Qt::Orientation::Horizontal, this);
}

void MainWindow::UpdateGraph()
{
	CalcPoints();
	ui.m_inputPlot->clearGraphs();
	ui.m_inputPlot->addGraph();
	for (unsigned int i = 0; i < m_points.size(); ++i)
	{
		ui.m_inputPlot->graph(0)->addData(m_points[i].ro, m_points[i].sigma);
	}

	ui.m_inputPlot->xAxis->setLabel("rho");
	ui.m_inputPlot->yAxis->setLabel("sigma");
	// set axes ranges, so we see all data:
	ui.m_inputPlot->xAxis->setRange(m_minRho, m_maxRho);
	ui.m_inputPlot->yAxis->setRange(-0.1, 0.1);
	ui.m_inputPlot->replot();
}

MainWindow::~MainWindow()
{

}

void MainWindow::CalcPoints()
{
	m_points.clear();
	m_diskParam.Us0 = ui.m_uS0->value();
	m_diskParam.Epsilon = ui.m_epsilon->value();
	m_diskParam.deltaRo = ui.m_deltaRho->value();
	m_alpha = ui.m_alpha->value();
	m_amplitude = ui.m_amplitude->value();
	m_rho0 = ui.m_rho0->value();
	m_diskParam.SetParameters();
	ui.m_chi0->setValue(m_diskParam.chi);
	if (m_diskParam.deltaRo <= 0)
		return;
	//ui.m_alpha->setValue(m_diskParam.alpha);
	m_minRho = ui.m_minRho->value();
	m_maxRho = ui.m_maxRho->value();
	m_diskParam.minRo = m_minRho;
	m_diskParam.maxRo = m_maxRho;
	int j = 0;


	Point p;
	p.ro = m_minRho;
	p.sigma = Gauss(p.ro);
	m_points.push_back(p);
	j++;
	p.ro = m_minRho + m_diskParam.deltaRo;
	p.sigma = Gauss(p.ro);
	m_points.push_back(p);
	j++;

	for (double i = m_minRho + 2 * m_diskParam.deltaRo; i < m_maxRho; i += m_diskParam.deltaRo)
	{
		p.ro = RoundToDecimal(i, 2);
		p.sigma = Gauss(p.ro);
		m_points.push_back(p);
		m_points[j - 1].dSigmaDRo = (p.sigma - m_points[j - 2].sigma) / (2 * m_diskParam.deltaRo);

		j++;
	}
}

long double MainWindow::CosGauss(double rho)
{
	return std::cos(rho - m_rho0)*Gauss(rho)*m_amplitude;
}

long double MainWindow::Gauss(double rho)
{
	long double p1 = -1 * m_alpha * std::pow((rho - m_rho0), 2);
	//double p1 = -1 * m_diskParam.alpha * std::pow((rho -  m_rho0), 2);
	long double p2 = exp(p1) * m_amplitude;
	return p2;;
}

long double MainWindow::RoundToDecimal(double number, int decimal)
{
	return std::floor(number * std::pow(10, decimal))*(1 / std::pow(10, decimal));
}

void MainWindow::Solve()
{
	m_steps = ui.m_steps->value();
	m_saveInterval = ui.m_saveInterval->value();
	m_dSigmadTauFlag = ui.m_dSigdTauFlag->isChecked();
	m_solver.Init(m_diskParam, m_points, m_steps, m_saveInterval, m_dSigmadTauFlag);
	m_solver.Run("test1");
}

void MainWindow::SelectFile()
{
	if (!m_fileSelector)
		m_fileSelector = new QFileDialog(this);

	m_fileSelector->setNameFilter(tr("Text files(*.txt)"));
	QStringList fileNames;
	if (m_fileSelector->exec())
		fileNames = m_fileSelector->selectedFiles();

	DisplayFile(fileNames.at(0).toStdString());
}

void  MainWindow::DisplayFile(const std::string& filePath)
{
	ui.m_viewerPlot->clearGraphs();

	ui.m_viewerPlot->xAxis->setLabel("rho");
	ui.m_viewerPlot->yAxis->setLabel("sigma");
	// set axes ranges, so we see all data:
	ui.m_viewerPlot->xAxis->setRange(m_minRho, m_maxRho);
	ui.m_viewerPlot->yAxis->setRange(-0.1, 0.1);
	
	std::fstream myfile(filePath, std::ios_base::in);
	if (!myfile)
		return;

	double minRho, maxRho, deltaRho;

	std::string line;
	std::getline(myfile, line);
	std::istringstream ss(line);
	ss >> minRho >> maxRho >> deltaRho;


	float a;
	int i = 0;
	QColor graphColor;
	QPen graphPen;
	graphPen.setWidth(4);
	ui.m_timeframeSliderLayout->setMargin(0);
	m_timeframeSlider->setMinimum(0);
	QLabel* timeLabel;
	while (myfile >> a)
	{
		timeLabel = new QLabel(QString::number(i), this);
		timeLabel->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
		graphColor.setHsv(i * 20, 255, 255);
		graphPen.setColor(graphColor);
		ui.m_viewerPlot->addGraph();
		ui.m_viewerPlot->graph(i)->setPen(graphPen);
		for (double rho = minRho; rho < maxRho; rho += deltaRho)
		{
			ui.m_viewerPlot->graph(i)->addData(rho, a);
			myfile >> a;
		}
		ui.m_timeframeSliderLayout->addWidget(timeLabel, 1, i, 1, 1);
		ui.m_viewerPlot->graph(i)->setVisible(false);
		i++;
	}
	ui.m_timeframeSliderLayout->addWidget(m_timeframeSlider, 0, 0, 1, i-1);
	m_timeframeSlider->setMaximum(i-1);
	m_timeframeSlider->setTickInterval(1);
	ui.m_viewerPlot->graph(0)->setVisible(true);
	ui.m_viewerPlot->replot();
	m_currentOutputGraph = 0;
}

void  MainWindow::TimeframeChanges(int newFrame)
{
	if (m_currentOutputGraph == -1)
		return;
	ui.m_viewerPlot->graph(m_currentOutputGraph)->setVisible(false);
	ui.m_viewerPlot->graph(newFrame)->setVisible(true);
	m_currentOutputGraph = newFrame;
	ui.m_viewerPlot->replot();
}