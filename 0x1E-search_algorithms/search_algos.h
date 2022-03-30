#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include "stdio.h"
#include "math.h"

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int lower_bound, int upper_bound);

#endif
