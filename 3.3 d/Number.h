#pragma once
#include <string>
#include <sstream>
using namespace std;
class Number
{
private:
	double number;
public:
	Number(const Number&);
	Number(double number = 0);
	Number& operator = (const Number&);
	~Number();

	void setNumber(double number) { this->number = number; }
	double getNumber()const { return this-> number; }
	operator string() const;
	friend ostream& operator << (ostream&, const Number&);
	friend istream& operator >> (istream&, Number&);
	friend Number operator -(const Number&, const Number&);
	friend Number operator *(const Number&, const Number&);
	
	Number& operator ++();
	Number operator ++(int);
	Number& operator --();
	Number operator --(int);
};

