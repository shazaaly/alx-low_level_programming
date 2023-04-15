#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _realloc - Reallocates a memory block using malloc and free.
* @ptr: Pointer to the memory previously allocated with malloc.
* @old_size: The size of the allocated memory block.
* @new_size: The new size for the memory block.
* Return: Pointer to the reallocated memory block, or NULL if new_size is 0
* and ptr is not NULL, or if the allocation fails.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i, min_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size > new_size)
	{
		min_size = new_size;
	}
	else
	{
		min_size = old_size;
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	if (new_size > old_size)
	{
		new = malloc(new_size);
		if (new == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < min_size; i++)
	{
		*((char *)new + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (new);
}
