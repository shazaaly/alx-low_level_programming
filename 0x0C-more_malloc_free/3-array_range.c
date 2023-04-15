#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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