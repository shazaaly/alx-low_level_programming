#include <stdio.h>
#include "main.h"
/**
* print_diagonal - draws a diagonal line of length n in the terminal,
*                  using the character '\'
*
* @n: the number of times the character '\' should be printed
*
* Return: void
*
* Description: If n is 0 or less, the
* function only prints a newline character.
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			_putchar(' ');
		}
		_putchar('\n');

	}
}
