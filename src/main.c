#include <stdio.h>
#include <root.h>
#include <math.h>

int main()
{
	float a;
	float b;
	float c;
	Roots answer;

	printf("Input your A, B, C for equation\n");
	scanf("%f %f %f", &a, &b, &c);

	answer = solve(a, b, c, NULL);
	if (answer.discriminant >= 0) {
		printf("Roots of the equation: %.2f & %.2f\n", answer.x1, answer.x2);
	}
	else
		printf("Discriminant is negative\n");

	return 0;
}