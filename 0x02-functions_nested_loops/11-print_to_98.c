#include <stdio.h>
#include "main.h"
/**
* print_to_98 - Prints all natural numbers from n to 98
* @n: Starting number
*
* Return: void
*/
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if(n < 10)
		{
			_putcharn(n + '0);
			_putchar(44);
		}
		else
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			if(n < 98)
			{
				_putchar(44);
				_putchar(' ');
			}
		}
	}
}

