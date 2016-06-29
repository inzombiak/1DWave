#include "MainWindow.h"
#include <math.h> 

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	CalcPoints();
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
	m_steps = ui.m_steps->value();
	m_saveInterval = ui.m_saveInterval->value();
	m_dSigmadTauFlag = ui.m_dSigdTauFlag->isChecked();
	m_diskParam.SetParameters();
	ui.m_chi0->setValue(m_diskParam.chi);
	if (m_diskParam.deltaRo <= 0)
		return;
	//ui.m_alpha->setValue(m_diskParam.alpha);
	m_minRho = ui.m_minRho->value();
	m_maxRho = ui.m_maxRho->value();
	int j = 0;
	Point p;
	p.ro = m_minRho;
	p.sigma = CosGauss(p.ro);
	m_points.push_back(p);
	j++;
	p.ro = m_minRho + m_diskParam.deltaRo;
	p.sigma = CosGauss(p.ro);
	m_points.push_back(p);
	j++;

	for (double i = m_minRho + 2 * m_diskParam.deltaRo; i < m_maxRho; i += m_diskParam.deltaRo)
	{
		p.ro = RoundToDecimal(i, 2);
		p.sigma = CosGauss(p.ro);
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