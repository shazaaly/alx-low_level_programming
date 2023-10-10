#include "search.h"
#include <stddef.h>
#include <stdio.h>
#include <math.h>
/**
* exponential_search - Search for a value in an array using exponential search.
* Description: This function searches for the specified 'value'
* @array: Pointer to the integer array.
* @size: Size of the array.
* @value: Value to be searched.
* Return: Index of the 'value' if found, or -1 if not found.
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t mid;
	size_t left, right;

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;

	}
	left = 0;
	right = (i < size) ? i : size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return ((int)mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
		    right = mid - 1;
		}
	}
	return (-1);
}
