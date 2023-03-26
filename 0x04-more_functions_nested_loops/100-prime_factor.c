#include <stdio.h>
#include "main.h"
/**
* main - finds and prints the largest prime factor of the number 612852475143
*
* Return: Always 0.
*
* Description: The function uses a brute force approach to find the largest
*/
int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		while (num != i && num % i == 0)
	{
		num /= i;
	}
	}
	printf("%ld\n", num);
	return (0);
}
