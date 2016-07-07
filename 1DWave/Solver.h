#ifndef SOLVER_H
#define SOLVER_H

#include "Point.h"

#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>

class Solver
{
public:

	void Init(const DiskParameters& dp, const std::vector<Point>& initialPoints, int steps, int saveInterval, bool dSigmaDtau);
	void Run(string outputDirector);
	void CalculateOnGPU(int readRow, int writeRow, const DiskParameters& m_discParams);
private:
	DiskParameters m_discParams;
	unsigned int m_steps;
	int m_saveInterval;
	bool m_dSigmadTauFlag;
	std::string m_outputDirectory;
	//std::vector<string> m_inputFilenames;

	//void LoadFromLUA(int filenameIndex);

	thrust::host_vector<thrust::host_vector<Point>> m_hostDistribution;
};

#endif

