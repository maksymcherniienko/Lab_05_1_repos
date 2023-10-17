#include <iostream>
#include <cmath>

using namespace std;

double g(const double x, const double y, const double result);
int main()
{
	double x, y;
		cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	double result = (g(x * y, x * x, y * y) - pow(g(1, x, y), 2)) / (1 + g(sqrt(x), y * y, 1));
	cout << "result = " << result << endl;
	return 0;
}
double g(const double a, const double b, const double c) 
{
	return ((a * a) + (b * b) - (c * c));
}