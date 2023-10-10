#include "search.h"
#include <stddef.h>
#include <stdio.h>

/**
* printArray - Prints the elements of an array.
* @array: The array to be printed.
* @size: The size of the array.
*/
void printArray(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
* binary_search - Searches for a value in a sorted array using binary search.
* @array: The sorted array to search in.
* @size: The size of the array.
* @value: The value to search for.
*
* Return: The index of the value in the array, or -1 if not found.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	/* size_t mid; */
	size_t mid = left + (right - left) / 2;

	if (array == NULL)
		return (-1);
	printArray(array, size);
	if (mid && mid % 2 == 0)
		mid--;



	while (left <= right)
	{
		mid = left + (right - left) / 2;


		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (-1);
		}
		if (left <= right)
		{
			printArray(&array[left], right - left + 1);
		}
	}
	return (-1);
}
