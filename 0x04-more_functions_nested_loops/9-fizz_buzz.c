#include <stdio.h>
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
	printf("FizzBuzz");
	printf(" ");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz");
		printf(" ");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
		printf(" ");
	}
	else
	{
		printf("%d", i);
		printf(" ");
	}
	if (i != 100)
	{
		printf(" ");
	}
	else
	{
		printf("\n");
	}
}
return (0);
}
