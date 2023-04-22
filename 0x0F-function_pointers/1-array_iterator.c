#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array of integers
 * @size: size of the array
 * @action: pointer to the function to be executed on each element of the array
 * Description: This function takes a pointer to an array of integers, the size
 * returns void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;
	for ( i = 0; i < size; i++)
	{
		action(array[i]);
	}
}