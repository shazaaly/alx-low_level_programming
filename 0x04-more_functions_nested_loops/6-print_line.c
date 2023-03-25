#include <stdio.h>
#include "main.h"
/**
* print_line - draws a straight line of length n in the terminal,
*              using the character '_'
*
* @n: the number of times the character '_' should be printed
*
* Return: void
*
* Description: If n is 0 or less, the
* function only prints a newline character.
* The line always ends with a newline character.
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
