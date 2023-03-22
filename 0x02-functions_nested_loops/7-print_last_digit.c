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
	n = n % 10;
	if (n >= 0 && n <=9)
	{
	_putchar(n + '0');
	}
	return (n);
}
