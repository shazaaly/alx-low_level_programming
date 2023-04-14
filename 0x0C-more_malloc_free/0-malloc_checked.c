#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(int));
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}