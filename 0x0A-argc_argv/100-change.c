#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Entry point for the program
* @argc: The number of command-line arguments
* @argv: An array of strings containing the command-line arguments
* Return: Always 0 (success)
* Description: This program calculates the minimum number of coins needed
*/
int main(int argc, char *argv[])
{
	int i;
	int amount = atoi(argv[1]);
	int coins = 0;
	int cents[] = {25, 10, 5, 2, 1};  /*sorted descend*/
	int size = sizeof(cents) / sizeof(int);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (1);
		}
	}

		for (i = 0; i < size; i++)
		{
			coins += amount / cents[i];
			amount %= cents[i];
		}
			printf("%d", coins);
			return (0);
}
