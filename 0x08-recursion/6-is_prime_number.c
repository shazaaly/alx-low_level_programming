#include "main.h"
#include <math.h>
/*
* is_prime_number - Checks if an integer is a prime number
* @n: The integer to check
* Return: 1 if n is prime, 0 otherwise
*/
/**
 * is_prime_helper - checks if a number is prime using recursion
 * @n: the number to check for primality
 * @i: the current divisor being tested
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i > n - 1)
	{
		return (1);
	}
	else
	{
		return (is_prime_helper(n, i + 2));
	}
}
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 3));
	}

}


