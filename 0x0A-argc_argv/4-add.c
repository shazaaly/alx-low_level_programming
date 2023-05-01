#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array of command-line argument strings
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
