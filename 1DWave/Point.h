#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <fstream>
#include <string>
#include <thrust/host_vector.h>
#include <thrust/device_vector.h>
#include <thrust/generate.h>
#include <thrust/sort.h>
#include "math.h"

using std::string;

struct DiskParameters
{
	double Us0;
	double deltaTau;
	double deltaRo;
	double gammaSq;
	double chi;
	double alpha;
	double C1, C2, C3, C4;
	double BIG_TWO;
	double Epsilon;
	__host__ __device__
		void SetParameters();
};

class Point
{
public:
	__host__ __device__
		Point();

	__host__ __device__
	void Set(const Point& left, const Point& right, const DiskParameters& params);

	__host__
	bool SetFromFile(std::ifstream&, bool);

	__host__ __device__
		void Barrier(const Point& copy);

	__host__ __device__
		void Extrapolate(const Point& p1, const Point& p2, const DiskParameters& params);

	string GetValuesByString()
	{
		return(std::to_string(ro) + " " + std::to_string(sigma) + " " + std::to_string(dSigmaDRo) + " " + std::to_string(dSigmaDTau));
	}

	string GetSigmaByString()
	{
		return std::to_string(sigma);
	}

	double GetTau()
	{
		return tau; 
	}

	string GetTauByString()
	{
		return std::to_string(tau);
	}
	long double ro;
	long double tau;
	long double sigma;
	long double dSigmaDTau;
	long double dSigmaDRo;
private:
	__host__ __device__
		void CalcDSigmaDTau(const Point& left, const Point& right, const DiskParameters& params);
	__host__ __device__
		void CalcDSigmaDTauSecondApprox(const Point& left, const Point& right, const Point& newPoint, const DiskParameters& params);

	__host__ __device__
		void CalcDSigmaDRoSecondApprox(const Point& left, const Point& right, const DiskParameters& params);

	__host__ __device__
		void CalcSigma(const Point& left, const Point& right, const DiskParameters& params);

	

};

#endif