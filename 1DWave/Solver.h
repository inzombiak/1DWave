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

	void Init();
	void Run(string outputDirector);
	void CalculateOnGPU(int readRow, int writeRow, const DiskParameters& m_discParams);
private:
	DiskParameters m_discParams;
	unsigned int m_steps;
	int m_saveInterval;
	std::string m_outputDirectory;
	std::vector<string> m_inputFilenames;
	bool m_dSigmadTauFlag;
	void LoadFromLUA(int filenameIndex);

	thrust::host_vector<thrust::host_vector<Point>> m_hostDistribution;
};

#endif

