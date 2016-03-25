#include <root.h>
#include <math.h>

float solve(float a, float b, float c, float* x1, float* x2, int* roots_num)
{
	float d;
	int roots = 0;

	d = b * b - 4 * a * c;
	
	if (d > 0)
		roots = 2;
	else if (d == 0) 
		roots = 1;

	*x1 = (-b + sqrt(d)) / (2 * a);
	*x2 = (-b - sqrt(d)) / (2 * a);
	*roots_num = roots;

	return d;
}