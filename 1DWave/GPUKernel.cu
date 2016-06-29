#include "GPUKernel.h"

void CalculateOnGPUKernel(thrust::host_vector<Point>& readVec, thrust::host_vector<Point>& writeVec, const DiskParameters& discParams)
{
	thrust::device_vector<Point> read = readVec;
	thrust::device_vector<Point> write = writeVec;


	Point left, right, newPoint;

	for (unsigned int j = 1; j < read.size(); ++j)
	{
		left = readVec[j - 1];
		right = readVec[j + 1];

		newPoint.Set(left, right, discParams);
		writeVec[j] = newPoint;
	}

}