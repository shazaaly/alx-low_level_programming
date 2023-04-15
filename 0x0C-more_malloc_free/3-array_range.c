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
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
