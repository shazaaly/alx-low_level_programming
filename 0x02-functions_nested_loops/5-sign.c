#include <stdio.h>
#include "main.h"
/*
* print_sign - function that checks for lowercase character.
* return 1 or 0
*/
/**
* * print_sign : function prints letters small caps.
*
* This function prints all sign.
* Parameters - integer
* Return: 0 and prints 0 if n is zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
