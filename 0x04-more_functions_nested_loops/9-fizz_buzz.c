#include <stdio.h>
#include "main.h"
/**
* main - prints the numbers from 1 to 100,
* replacing multiples of 3 with "Fizz",
* multiples of 5 with "Buzz", and multiples of both with "FizzBuzz"
*
* Return: Always 0.
*
* Description: The function uses a for loop to iterate from 1 to 100,
*/
int main(void)
{
int i;
int n = 100;

for (i = 0; i <= n; i++)
{
	if (i % 5 == 0 && i % 3 == 0)
	{
	printf("%s", "FizzBuzz");
	printf("%c", ' ');
	}
	else if (i % 3 == 0)
	{
		printf("%s", "Fizz");
		printf("%c", ' ');
	}
	else if (i % 5 == 0)
	{
		printf("%s", "Buzz");
		printf("%c", ' ');
	}
	else
	{
		printf("%d", i);
		printf("%c", ' ');
	}
}
}
