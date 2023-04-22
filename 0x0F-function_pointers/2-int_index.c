#include "function_pointers.h"
/**
* int_index - searches for an integer in an array
* @array: pointer to the array of integers
* @size: size of the array
* @cmp: pointer to the comparison function to be used
* Return: index of the first element for which the comparison function
* Description: This function takes a pointer to an array of integers, the size
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);

			}
		}
	return (-1);
}
