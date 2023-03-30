#include <stdio.h>
#include "main.h"
/**
* print_number - Prints an integer.
* @n: Integer to be printed.
* Return: void.
*/
void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n);
	}
	_putchar(n % 10 + '0');
}
