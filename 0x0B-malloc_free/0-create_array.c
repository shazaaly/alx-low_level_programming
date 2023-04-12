#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - Allocates and initializes an array of characters
* @size: The size of the array to allocate
* @c: The character to initialize the array with
*
* Return: If size is 0 or if malloc() fails - NULL
*         Otherwise - a pointer to the allocated and initialized array
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *) malloc(size * sizeof(char));

	s = malloc(INT_MAX);
	if (s == NULL || arr ==NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
