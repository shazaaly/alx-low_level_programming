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

for (i = 1; i <= 100; i++)
{
	if (i % 5 == 0 && i % 3 == 0)
	{
	printf("%s", "FizzBuzz");
	printf("%c", ' ');
	}
	else if (i % 3 == 0 && !(i % 5 == 0))
	{
		printf("%s", "Fizz");
		printf("%c", ' ');
	}
	else if (i % 5 == 0 && !(i % 3 == 0))
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
printf("\n");
}
