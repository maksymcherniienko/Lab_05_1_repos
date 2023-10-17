#include <iostream>
#include <cmath>

using namespace std;

double g(const double x, const double y, const double z); // прототип
int main()
{
	double x, y;
		cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	double z = (g(x * y, x * x, y * y) - pow(g(1, x, y), 2)) / (1 + g(sqrt(x), y * y, 1));
	cout << "z = " << z << endl;
	return 0;
}
double g(const double a, const double b, const double c) // визначення
{
	return ((a * a) + (b * b) - (c * c));
}