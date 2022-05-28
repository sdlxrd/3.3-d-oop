#pragma once
#include "Number.h"
#include <string>
using namespace std;
class Real :Number
{
public:
	Real(double f = 0) : Number(f) {};
	Real(const Number&);
	Real(const Real&);
	~Real();
	Real& operator=(const Real&);

	void setNum(Number n) { *this = n; }
	Number getNum() const { return *this; }
	   
	double Root(const int step, const Number& f);
	double Degree(const int step);
};