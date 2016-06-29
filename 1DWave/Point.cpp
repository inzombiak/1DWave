//
//bool Point::SetFromFile(std::ifstream& file, bool deltaSigmaDeltaTauFlag)
//{
//	if (!(file >> ro))
//		return false;
//	file >> sigma;
//	file >> dSigmaDRo;
//
//	if (deltaSigmaDeltaTauFlag)
//		dSigmaDTau = 0;
//	else
//		dSigmaDTau = dSigmaDRo;
//	tau = 0;
//
//	return true;
//}
//
//void Point::Set(const Point& left, const Point& right)
//{
//	double lastSigma;
//
//	tau = left.tau + DiskParameters::deltaTau;
//	ro = right.ro - DiskParameters::deltaRo;
//	CalcDSigmaDRoSecondApprox(left, right);
//	CalcDSigmaDTau(left, right);
//	CalcSigma(left, *this);
//	lastSigma  = 0;
//
//	while (abs(sigma - lastSigma) > DiskParameters::Epsilon)
//	{
//		lastSigma = sigma;
//		CalcDSigmaDTauSecondApprox(left, right, *this);
//		CalcSigma(left, *this);
//	}
//
//}
//
//bool Point::SetFromFile(std::ifstream& file, bool deltaSigmaDeltaTauFlag)
//{
//	if (!(file >> ro))
//		return false;
//	file >> sigma;
//	file >> dSigmaDRo;
//
//	if (deltaSigmaDeltaTauFlag)
//		dSigmaDTau = 0;
//	else
//		dSigmaDTau = dSigmaDRo;
//	tau = 0;
//
//	return true;
//}
//
//void Point::Extrapolate(const Point& p1, const Point& p2)
//{
//	double roDiff = (ro - p1.ro) / (p2.ro - p1.ro);
//	ro = p1.ro + DiskParameters::deltaRo;
//	tau = p1.tau;
//	sigma = p1.sigma + roDiff*(p2.sigma - p1.sigma);
//	dSigmaDRo = p1.dSigmaDRo + roDiff*(p2.dSigmaDRo - p1.dSigmaDRo);
//	dSigmaDTau = p1.dSigmaDTau + roDiff*(p2.dSigmaDTau - p1.dSigmaDTau);
//}
//
//void Point::CalcDSigmaDTau(const Point& left, const Point& right)
//{
//	double leftPow, rightPow, result = 0;
//	leftPow = pow(left.sigma, 3);
//	rightPow = pow(right.sigma, 3);
//
//	result += DiskParameters::Us0*(left.dSigmaDTau + right.dSigmaDTau);
//	result += -(DiskParameters::Us0*DiskParameters::Us0)*(left.dSigmaDRo - right.dSigmaDRo);
//	result += -DiskParameters::deltaRo*(DiskParameters::BIG_TWO * DiskParameters::alpha*(leftPow + rightPow) - DiskParameters::gammaSq*(left.sigma + right.sigma));
//	result /= (DiskParameters::BIG_TWO*DiskParameters::Us0);
//
//	/*result += left.dSigmaDTau + right.dSigmaDTau;
//	result += DiskParameters::Us0*(right.dSigmaDRo-left.dSigmaDRo);
//	result /= BIG_TWO;
//	result -= BIG_TWO * C1 * (leftPow + rightPow);
//	result += BIG_TWO * C2 * (left.sigma + right.sigma);*/
//
//	if (abs(result) < pow(10, -6))
//		result = 0;
//	dSigmaDTau = result;
//}
//
//void Point::CalcDSigmaDTauSecondApprox(const Point& left, const Point& right, const Point& newPoint)
//{
//	double leftPow, rightPow, newPow, result = 0;
//	leftPow = pow(left.sigma, 3);
//	rightPow = pow(right.sigma, 3);
//	newPow = pow(newPoint.sigma, 3);
//
//	result += DiskParameters::Us0*(left.dSigmaDTau + right.dSigmaDTau);
//	result += (DiskParameters::Us0*DiskParameters::Us0)*(right.dSigmaDRo - left.dSigmaDRo);
//	result += -DiskParameters::deltaRo*DiskParameters::alpha*(DiskParameters::BIG_TWO * newPow + leftPow + rightPow);
//	result += (DiskParameters::deltaRo / 2)* (-DiskParameters::gammaSq) * (DiskParameters::BIG_TWO * newPoint.sigma + left.sigma + right.sigma);
//	result /= (DiskParameters::BIG_TWO * DiskParameters::Us0);
//
//	/*result += left.dSigmaDTau + right.dSigmaDTau;
//	result += DiskParameters::Us0*(right.dSigmaDRo - left.dSigmaDRo);
//	result /= BIG_TWO;
//	result -= C1 * (leftPow + rightPow + BIG_TWO*newPow);
//	result += C2 * (left.sigma + right.sigma + newPoint.sigma);*/
//
//	if (abs(result) < pow(10, -6))
//		result = 0;
//	dSigmaDTau = result;
//}
//
//void Point::CalcDSigmaDRoSecondApprox(const Point& left, const Point& right)
//{
//	double leftPow, rightPow, result = 0;
//	leftPow = left.sigma;
//	rightPow = right.sigma;
//	leftPow = pow(left.sigma, 3);
//	rightPow = pow(right.sigma, 3);
//
//	result += (DiskParameters::Us0*DiskParameters::Us0)*(right.dSigmaDRo + left.dSigmaDRo);
//	result += DiskParameters::Us0*(right.dSigmaDTau - left.dSigmaDTau);
//	result += DiskParameters::deltaRo*(DiskParameters::BIG_TWO * DiskParameters::alpha*(leftPow - rightPow) - DiskParameters::gammaSq*(left.sigma - right.sigma)) / 2;
//	result /= (DiskParameters::BIG_TWO* DiskParameters::Us0*DiskParameters::Us0);
//
//	/*result += right.dSigmaDRo + left.dSigmaDRo;
//	result +=(right.dSigmaDTau - left.dSigmaDTau) / DiskParameters::Us0;
//	result /= BIG_TWO;
//	result -= C3*(rightPow - leftPow);
//	result += C4*(right.sigma - left.sigma);*/
//
//	if (abs(result) < pow(10, -6))
//		result = 0;
//	dSigmaDRo = result;
//}
//
//void Point::CalcSigma(const Point& left, const Point& right)
//{
//	double result = 0;
//
//	result += (left.dSigmaDTau + right.dSigmaDTau)*DiskParameters::deltaTau / 2;
//	result += (left.dSigmaDRo + right.dSigmaDRo)*DiskParameters::deltaRo / 2;
//	result += left.sigma;
//
//	if (abs(result) < pow(10, -6))
//		result = 0;
//	sigma = result;
//}