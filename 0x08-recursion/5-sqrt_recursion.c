#include <stdio.h>
#include "main.h"
/**
* _sqrt_recursion - Returns the natural square root of a number
*
* @n: The number to calculate the square root of
*
* Return: The natural square root of n, or -1 if n is negative
*/
int _sqrt_recursion(int n)
{
	if (n % 2 != 0)
	{
		return (-1);
	}
	else if (n > 1)
	{
		return (n / 2 * (_sqrt_recursion(n / 2)));
	}

	else if (n == 1)
	{
		return (1);
	}

}
