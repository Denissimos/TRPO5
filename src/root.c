#include <root.h>
#include <math.h>

double solve(int a, int b, int c, float* x1, float* x2)
{
	double d;

	d = b * b - 4 * a * c;
	*x1 = (-b + sqrt(d)) / (2 * a);
	*x2 = (-b - sqrt(d)) / (2 * a);

	return d;
}