#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <vector>

#include "ui_MainWindow.h"
#include "Point.h"
#include "Solver.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

public slots:
	void UpdateGraph();
	void Solve();
	void SelectFile();
	void TimeframeChanges(int newFrame);

private:
	void CalcPoints();
	void DisplayFile(const std::string& filePath);
	long double CosGauss(double rho);
	long double Gauss(double rho);
	long double RoundToDecimal(double number, int decimal);

	QFileDialog* m_fileSelector;
	QSlider* m_timeframeSlider;
	Ui::MainWindowClass ui;
	DiskParameters m_diskParam;
	std::vector<Point> m_points;
	Solver m_solver;
	int m_saveInterval;
	int m_steps;
	int m_currentOutputGraph = -1;
	double m_amplitude;
	double m_rho0;
	double m_minRho, m_maxRho;
	double m_alpha;
	bool m_dSigmadTauFlag;
};

#endif // MAINWINDOW_H
