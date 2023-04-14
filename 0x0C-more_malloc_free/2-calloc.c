#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - allocate and initialize memory for an array
* @nmemb: number of elements to allocate
* @size: size of each element in bytes
*
* Return: pointer to allocated memory, or NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)ptr)[i] = 0;
	}
	return (ptr);
}
