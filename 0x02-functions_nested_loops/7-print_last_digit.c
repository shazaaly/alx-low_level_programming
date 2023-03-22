#include <stdio.h>
#include "main.h"
/**
* print_last_digit - prints the last digit of a number
*
* @n: the number to find the last digit of
*
* Return: the value of the last digit
*/
int print_last_digit(int n)
{
	int lastnum;

	if (n < 0)
	{
		lastnum = -1 * (n % 10);
	}
	else
	{
		lastnum = n % 10;
	}
	_putchar(lastnum + '0');
	return (lastnum);
}
