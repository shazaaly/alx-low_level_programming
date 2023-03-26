#include <stdio.h>
#include "main.h"
/**
* print_triangle - prints a triangle of a given size to the standard output,
* @size: the size of the triangle to print
*
* Return: void
*
* Description: The function uses the _putchar() function to print characters.
*/
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= i)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
