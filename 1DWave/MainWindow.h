#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <vector>

#include "ui_MainWindow.h"
#include "Point.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

public slots:
	void UpdateGraph();

private:
	void CalcPoints();
	long double CosGauss(double rho);
	long double Gauss(double rho);
	long double RoundToDecimal(double number, int decimal);

	Ui::MainWindowClass ui;
	DiskParameters m_diskParam;
	std::vector<Point> m_points;
	int m_saveInterval;
	int m_steps;
	double m_amplitude;
	double m_rho0;
	double m_minRho, m_maxRho;
	double m_alpha;
	bool m_dSigmadTauFlag;
};

#endif // MAINWINDOW_H
