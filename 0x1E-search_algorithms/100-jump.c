#include "search.h"
#include <stddef.h>
#include <stdio.h>
#include <math.h>


int jump_search(int *array, size_t size, int value)
{
	size_t left, right = 0;
	size_t jump = size_t(sqrt(size));

	while (right <= size && right < value)
	{
		left = right;
	}
}
