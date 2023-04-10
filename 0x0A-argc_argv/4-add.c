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
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		if (isdigit(argv[i][0]) || isdigit(argv[i][0]) == '-' || isdigit(argv[i][1]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
