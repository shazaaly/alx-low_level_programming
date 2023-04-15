#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - creates an array from min to max
* @min: the minimum value to include in the range
* @max: the maximum value to include in the range
* Return: On success, a pointer to the newly-allocated array.
*/
int *array_range(int min, int max)
{
	int *ptr;
	int size;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = min; i < size; i++, j++)
	{
		ptr[i] = j;
	}
	return (ptr);
}
