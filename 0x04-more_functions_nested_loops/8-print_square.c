#include <stdio.h>
#include "main.h"
/**
* print_square - prints a square of a given size to the standard output,
*                followed by a new line
*
* @size: the size of the square to print
*
* Return: void
*
* Description: The function uses the _putchar() function to print characters.
*/
void print_square(int size)
{
	int rows;
	int cols;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (rows < size)
	{
		for (cols = 0; cols < size; cols++)
		{
			_putchar('#');
		}
		_putchar('\n');
		rows++;
	}
}
