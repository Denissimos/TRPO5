#ifndef ROOT_H
#define ROOT_H

double discriminant(int a, int b, int c)
{
	double d;

	d = b * b - 4 * a * c;
	return d;
}

double firstroot(int b, int a, float d)
{
	double x;

	x = (-b - sqrt(d)) / (2 * a);
	return x;
}

double secondroot(int b, int a, float d)
{
	double x;
	
	x = (-b + sqrt(d)) / (2 * a);
	return x;
}

#endif