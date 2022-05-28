#include "Real.h"
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#define PI 3.14159265358979323846
using namespace std;
Real::Real(const Real& x)
{
	*this = x;
}
Real::Real(const Number& x)
{
	setNumber(x.getNumber());
}
Real::~Real()
{}
Real& Real::operator =(const Real& x)
{
	setNum(x.getNum());
	return *this;
}

double Real::Root(const int step, const Number& x)
{
	return pow(x.getNumber(), 1. / step);
}
double Real::Degree(const int step)
{
	return pow(PI, step);
}
