#include "iostream"
#include "cmath"

using namespace std;

double f(double a, double b, double c)
{
	return a * sin(b) + b * sin(a) + pow(c, 2);
}

int main()
{
	double s, t, y;

	cout << "s = "; cin >> s;

	cout << "t = "; cin >> t;

	y = (f(1, t + s, s) + f(t, s * t, 1)) / (1 + pow(f(s, 1, t), 2));

	cout << "y = " << y << endl;

	return 0;
}