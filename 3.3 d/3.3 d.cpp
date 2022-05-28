#include "PubReal.h"
#include "Real.h"
#include <iostream>

using namespace std;

int main()
{
	PubReal a;
	Real a1;
	Number x, y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	int n;
	cout << "n = "; cin >> n;
	cout << endl << "x - y = " << x - y;
	cout << "x * y = " << x * y << endl;
	cout << "x++ = " << x++ << "result = " << x << endl;
	cout << "x-- = " << x-- << "result = " << x << endl;
	cout << "++x = " << ++x;
	cout << "--x = " << --x;
	cin.get();
	cin.get();
	system("cls");

	cout << "public:" << endl;
	cout << endl << n << " degree of PI = " << a.Degree(n);
	cout << endl << "Root of " << n << " degree of x = " << a.Root(n, x) << endl;
	cout << "Root of " << n << " degree of y = " << a.Root(n, y) << endl;

	cin.get();
	system("cls");
	cout << "private:" << endl;
	cout << endl << n << " degree of PI = " << a1.Degree(n);
	cout << endl << "Root of " << n << " degree of x = " << a1.Root(n, x) << endl;
	cout << "Root of " << n << " degree of y = " << a1.Root(n, y) << endl;
}