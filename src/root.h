#ifndef ROOT_H
#define ROOT_H

typedef struct {
	float x1;
	float x2;
	float discriminant;
} Roots;

Roots solve(float a, float b, float c, int *status);

#endif