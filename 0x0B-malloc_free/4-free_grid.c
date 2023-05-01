#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - frees a 2D grid previously created by alloc_grid
* @grid: pointer to the 2D grid
* @height: height of the grid
* Description: This function takes a pointer to a 2D grid of integers
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);

}
