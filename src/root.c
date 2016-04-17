#include <root.h>
#include <math.h>

Roots solve(float a, float b, float c, int *status)
{
	Roots answer;

	answer.discriminant = b * b - 4 * a * c;

	if (a == 0) {
		*status = INVALID_INPUT;
		return answer;
	}
	else if (answer.discriminant < 0) {
		*status = NO_ROOTS;
		return answer;
	}
	
	if (answer.discriminant == 0)
		*status = ONE_ROOT;
	else 
		*status = TWO_ROOTS;
	answer.x1 = (-b + sqrt(answer.discriminant)) / (2 * a);
	answer.x2 = (-b - sqrt(answer.discriminant)) / (2 * a);

	return answer;
}