#include <stdio.h>
#include "main.h"
/**
* print_integer - Prints an integer to the standard output
*
* @n: The integer to print
*
* This function takes an integer @n as input and prints it to the standard
* output using the printf function. The integer is printed as a decimal
* number with no leading zeros or sign.
*
* Return: None
*/
void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (n / 10 > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + 48);
}
