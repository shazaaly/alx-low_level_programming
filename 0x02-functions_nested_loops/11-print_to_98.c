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
		_putchar(n);
		_putchar(44);
		_putchar(32);
	}
}
