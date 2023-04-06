#include "main.h"
#include <stdio.h>
/**
* is_prime_number - Checks if an integer is a prime number
* @n: The integer to check
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	int i = 0;
	if (n <= 0)
	{
		return (0);
	}
	return is_prime_number(n % i) == 0 ? 1 : 0;

}