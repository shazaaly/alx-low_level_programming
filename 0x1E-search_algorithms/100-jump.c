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

int jump_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = 0;
	size_t jump = sqrt(size);
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (right < size && array[right] < value)
	{
		left = right;
		right += jump;
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);

	}

	if (right >= size)
	{
		right = size - 1;

	}
	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}

	}
	return (-1);


}
