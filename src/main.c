#include <stdio.h>
#include <root.h>
#include <math.h>

int main()
{
	float a;
	float b;
	float c;
	float x1;
	float x2;
	float d;

	printf("Input your A, B, C for equation\n");
	scanf("%f %f %f", &a, &b, &c);

	d = solve(a, b, c, &x1, &x2);
	if (d >= 0) {
		printf("Roots of the equation: %.2f & %.2f\n", x1, x2);
	}
	else
		printf("Discriminant is negative\n");

	return 0;
}