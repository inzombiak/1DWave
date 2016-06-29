#include "Point.h"
#include <iostream>
#include <fstream>
#include <string>
#include <thrust/host_vector.h>
#include <thrust/device_vector.h>
#include <thrust/generate.h>
#include <thrust/sort.h>
#include "math.h"

void CalculateOnGPUKernel(thrust::host_vector<Point>& readVec, thrust::host_vector<Point>& writeVec, const DiskParameters& discParams);