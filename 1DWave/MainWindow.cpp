#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// generate some data:
	QVector<double> x(101), y(101); // initialize with entries 0..100
	for (int i = 0; i<101; ++i)
	{
		x[i] = i / 50.0 - 1; // x goes from -1 to 1
		y[i] = x[i] * x[i]; // let's plot a quadratic function
	}
	// create graph and assign data to it:
	ui.m_inputPlot->addGraph();
	ui.m_inputPlot->graph(0)->setData(x, y);
	// give the axes some labels:
	ui.m_inputPlot->xAxis->setLabel("x");
	ui.m_inputPlot->yAxis->setLabel("y");
	// set axes ranges, so we see all data:
	ui.m_inputPlot->xAxis->setRange(-1, 1);
	ui.m_inputPlot->yAxis->setRange(0, 1);
	ui.m_inputPlot->replot();
}

MainWindow::~MainWindow()
{

}
