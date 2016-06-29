#include "Point.h"

void DiskParameters::SetParameters()
{
	BIG_TWO = 2;
	deltaTau = deltaRo / Us0;
	chi = double(0.5) / (Us0*Us0);
	gammaSq = (chi / BIG_TWO) - 1;
	alpha = (chi / BIG_TWO) * (double(0.5) - chi / BIG_TWO);
	C1 = deltaTau * alpha / BIG_TWO;
	C2 = deltaTau * gammaSq / (BIG_TWO * BIG_TWO);
	C3 = C1 / Us0;
	C4 = C2 / Us0;
}

Point::Point() : ro(0), tau(0), dSigmaDRo(0), dSigmaDTau(0), sigma(0){};

bool Point::SetFromFile(std::ifstream& file, bool deltaSigmaDeltaTauFlag)
{
	if (!(file >> ro))
		return false;
	file >> sigma;
	file >> dSigmaDRo;

	if (deltaSigmaDeltaTauFlag)
		dSigmaDTau = 0;
	else
		dSigmaDTau = sigma*sigma;
	tau = 0;

	return true;
}

void Point::Set(const Point& left, const Point& right, const DiskParameters& params)
{
	double lastSigma;

	tau = left.tau + params.deltaTau;
	ro = right.ro - params.deltaRo;
	CalcDSigmaDRoSecondApprox(left, right, params);
	CalcDSigmaDTau(left, right, params);
	CalcSigma(left, *this, params);
	lastSigma = 0;

	while (abs(sigma - lastSigma) > params.Epsilon)
	{
		lastSigma = sigma;
		CalcDSigmaDTauSecondApprox(left, right, *this, params);
		CalcSigma(left, *this, params);
	}

}

void Point::Extrapolate(const Point& p1, const Point& p2, const DiskParameters& params)
{
	ro = p1.ro + params.deltaRo;
	tau = p1.tau;
	sigma = 0;
	dSigmaDRo = p1.dSigmaDRo;
	dSigmaDTau = p1.dSigmaDTau;
}

void Point::CalcDSigmaDTau(const Point& left, const Point& right, const DiskParameters& params)
{
	double leftPow, rightPow, result = 0;
	leftPow = pow(left.sigma, 3);
	rightPow = pow(right.sigma, 3);

	result += params.Us0*(left.dSigmaDTau + right.dSigmaDTau);
	result += -(params.Us0*params.Us0)*(left.dSigmaDRo - right.dSigmaDRo);
	result += -params.deltaRo*(params.BIG_TWO * params.alpha*(leftPow + rightPow) - params.gammaSq*(left.sigma + right.sigma));
	result /= (params.BIG_TWO*params.Us0);

	/*result += left.dSigmaDTau + right.dSigmaDTau;
	result += params.Us0*(right.dSigmaDRo-left.dSigmaDRo);
	result /= BIG_TWO;
	result -= BIG_TWO * C1 * (leftPow + rightPow);
	result += BIG_TWO * C2 * (left.sigma + right.sigma);*/

	if (abs(result) < pow((double)10, (double)-6))
		result = 0;
	dSigmaDTau = result;
}

void Point::CalcDSigmaDTauSecondApprox(const Point& left, const Point& right, const Point& newPoint, const DiskParameters& params)
{
	double leftPow, rightPow, newPow, result = 0;
	leftPow = pow(left.sigma, 3);
	rightPow = pow(right.sigma, 3);
	newPow = pow(newPoint.sigma, 3);

	result += params.Us0*(left.dSigmaDTau + right.dSigmaDTau);
	result += (params.Us0*params.Us0)*(right.dSigmaDRo - left.dSigmaDRo);
	result += -params.deltaRo*params.alpha*(params.BIG_TWO * newPow + leftPow + rightPow);
	result += (params.deltaRo / 2)* (-params.gammaSq) * (params.BIG_TWO * newPoint.sigma + left.sigma + right.sigma);
	result /= (params.BIG_TWO * params.Us0);

	/*result += left.dSigmaDTau + right.dSigmaDTau;
	result += params.Us0*(right.dSigmaDRo - left.dSigmaDRo);
	result /= BIG_TWO;
	result -= C1 * (leftPow + rightPow + BIG_TWO*newPow);
	result += C2 * (left.sigma + right.sigma + newPoint.sigma);*/

	if (abs(result) < pow((double)10, (double)-6))
		result = 0;
	dSigmaDTau = result;
}

void Point::CalcDSigmaDRoSecondApprox(const Point& left, const Point& right, const DiskParameters& params)
{
	double leftPow, rightPow, result = 0;
	leftPow = left.sigma;
	rightPow = right.sigma;
	leftPow = pow(left.sigma, 3);
	rightPow = pow(right.sigma, 3);

	result += (params.Us0*params.Us0)*(right.dSigmaDRo + left.dSigmaDRo);
	result += params.Us0*(right.dSigmaDTau - left.dSigmaDTau);
	result += params.deltaRo*(params.BIG_TWO * params.alpha*(leftPow - rightPow) - params.gammaSq*(left.sigma - right.sigma)) / 2;
	result /= (params.BIG_TWO* params.Us0*params.Us0);

	/*result += right.dSigmaDRo + left.dSigmaDRo;
	result +=(right.dSigmaDTau - left.dSigmaDTau) / params.Us0;
	result /= BIG_TWO;
	result -= C3*(rightPow - leftPow);
	result += C4*(right.sigma - left.sigma);*/

	if (abs(result) < pow((double)10, (double)-6))
		result = 0;
	dSigmaDRo = result;
}

void Point::CalcSigma(const Point& left, const Point& right, const DiskParameters& params)
{
	double result = 0;

	result += (left.dSigmaDTau + right.dSigmaDTau)*params.deltaTau / 2;
	result += (left.dSigmaDRo + right.dSigmaDRo)*params.deltaRo / 2;
	result += left.sigma;

	if (abs(result) < pow((double)10, (double)-6))
		result = 0;
	sigma = result;
}

void Point::Barrier(const Point& copy)
{
	sigma = copy.sigma;
	tau = copy.tau;
	dSigmaDRo = -copy.dSigmaDRo;
	dSigmaDTau = copy.dSigmaDTau;

}