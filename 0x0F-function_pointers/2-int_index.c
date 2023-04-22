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
	int index;

	if (size <= 0 && size != NULL)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i <= size; i++)
		{
			index = cmp(array[i]);
		}
	}
	if (index > 0)
	{
		return (index);
	}
	else
	{
		return (-1);
	}
}
