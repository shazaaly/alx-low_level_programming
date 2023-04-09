#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array of command-line argument strings
* Return: Always 0
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
