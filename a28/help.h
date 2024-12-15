#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

#define HANDLE_NULL(val, err_str) { if (val == 0) { printf("Null Exception: %s\n", err_str); exit(727); } }

float uniform();
float normal(float mean, float std);
