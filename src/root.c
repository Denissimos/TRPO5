#include <root.h>
#include <math.h>

float solve(float a, float b, float c, float* x1, float* x2)
{
	float d;

	d = b * b - 4 * a * c;
	*x1 = (-b + sqrt(d)) / (2 * a);
	*x2 = (-b - sqrt(d)) / (2 * a);

	return d;
}