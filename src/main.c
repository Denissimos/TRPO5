#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	int b;
	int c;
	float x1;
	float x2;
	float d;

	printf("Input your A, B, C for equation\n");
	scanf("%d %d %d", &a, &b, &c);

	d = discriminant(a, b, c);
	if (d >= 0) {
		x1 = firstroot(b, a, d);
		x2 = secondroot(b, a, d);
		printf("Roots of the equation: %.2f & %.2f\n", x1, x2);
	}
	else
		printf("Discriminant is negative\n");

	return 0;
}