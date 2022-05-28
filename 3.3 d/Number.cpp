#include "Number.h"
#include <iostream>
#include <string>

using namespace std;

Number::Number(double a)
{
	setNumber(a);
}
Number::Number(const Number& n)
{
	*this = n;
}
Number& Number::operator =(const Number& n)
{
	setNumber(n.getNumber());
	return *this;
}
Number::~Number()
{}
Number::operator string() const
{
	stringstream ss;
	ss << number << endl;
	return ss.str();
}
Number operator -(const Number& x, const Number& y)
{
	return Number(x.getNumber() - y.getNumber());
}
Number operator *(const Number& x, const Number& y)
{
	return Number(x.getNumber() * y.getNumber());
}
ostream& operator << (ostream& out, const Number& x)
{
	out << string(x);
	return out;
}
istream& operator >> (istream& in, Number& x)
{
	double a;
	cout << " "; cin >> a;
	x.setNumber(a);
	return in;
}
Number& Number::operator ++()
{
	number++;
	return *this;
}
Number& Number::operator --()
{
	number--;
	return *this;
}
Number Number::operator ++(int)
{
	Number t(*this);
	number++;
	return t;
}
Number Number::operator --(int)
{
	Number t(*this);
	number--;
	return t;
}