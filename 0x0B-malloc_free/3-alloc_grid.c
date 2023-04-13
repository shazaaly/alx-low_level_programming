#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - allocate memory for a 2D array of integers
* @width: the width of the 2D array
* @height: the height of the 2D array
* Return: If successful, a pointer to the newly allocated 2D array,
*/
int **alloc_grid(int width, int height)
{
	int i;
	int j, k;
	int **ptr = malloc(height * sizeof(*ptr)); /*allocate mem to height*/

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(*ptr[i]));	/*allocate mem width / cols*/
		if (ptr[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(ptr[k]);
			}

		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
