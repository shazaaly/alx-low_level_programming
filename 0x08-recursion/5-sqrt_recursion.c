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
	int i = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (i > n / 2)
	{
		return (-1);
	}
	return ((_sqrt_recursion(i * i))  == n ? i : i++);
}
