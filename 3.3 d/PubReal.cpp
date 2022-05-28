#include "PubReal.h"
#include <iostream>
#include <string>
#include <sstream>
#define PI 3.14159265358979323846
using namespace std;
PubReal::PubReal(const PubReal& x)
{
	*this = x;
}
PubReal::PubReal(const Number& x)
{
	setNumber(x.getNumber());
}
PubReal::~PubReal()
{}
PubReal& PubReal::operator =(const PubReal& x)
{
	setNum(x.getNum());
	return *this;
}
double PubReal::Root(const int step, const Number& x)
{
	return pow(x.getNumber(), 1. / step);
}
double PubReal::Degree(const int step)
{
	return pow(PI, step);
}