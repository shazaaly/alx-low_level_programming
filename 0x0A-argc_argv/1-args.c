#include <stdio.h>
/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array of command-line argument strings
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	int count = 0;

	(void)argv;
	for (i = 1; i < argc; i++)
	{
		count++;
	}
	printf("%d\n", count);
	return (0);
}
