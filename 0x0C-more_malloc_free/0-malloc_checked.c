#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - allocate memory using malloc
* @b: size of memory block to allocate
*
* Return: pointer to allocated memory
*         If malloc fails, the function causes normal process termination
*         with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(int));
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
