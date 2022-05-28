#pragma once
#include "Number.h"
#include <string>
using namespace std;
class PubReal :public Number
{
public:
	PubReal(double f = 0) : Number(f) {};
	PubReal(const Number&);
	PubReal(const PubReal&);
	~PubReal();
	PubReal& operator=(const PubReal&);

	void setNum(Number n) { *this = n; }
	Number getNum() const { return *this; }

	double Root(const int, const Number&);
	double Degree(const int step);
};
