#include "help.h"

float uniform() {
	return ((float)rand()) / ((float)RAND_MAX);
}

float normal(float mean, float std) {
	float x, y, r;
	do {
		x = uniform() * 2.0f - 1.0f;
		y = uniform() * 2.0f - 1.0f;
		r = x * x + y * y;
	} while (r == 0.0f || r >= 1.0f);

	return mean + (y * sqrtf((-2.0f * logf(r)) / r) * std);
}
