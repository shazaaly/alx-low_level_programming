#include "search.h"
#include <stddef.h>
#include <stdio.h>
#include <math.h>

/**
* jump_search - Searches for a value in an array using jump search algorithm.
* @array: Pointer to the first element of the array.
* @size: The number of elements in the array.
* @value: The value to search for.
* Return: The index where `value` is located, or -1 if not found.
*/

#include <stdio.h>
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
	int step;
	int prev = 0;


	if (array == NULL || size == 0)
	{
		return (-1);
	}
	step = (int)sqrt(size);
	while (array[(int)fmin(step, size) - 1] < value)
	{
		prev = step;
		step += (int)sqrt(size);
		if (prev >= size)
		{
			return (-1);
		}
	}
	for (int i = prev; i < fmin(step, size); i++)
	{
		if (array[i] == value)
		{
			printf("Comparing value %d with array[%d] = %d\n", value, i, array[i]);
			return (i);
	    }
	    printf("Comparing value %d with array[%d] = %d\n", value, i, array[i]);
	}
	return (-1);
}
