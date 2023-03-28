#include "main.h"
/**
* print_rev - prints a string in reverse, followed by a new line
* @s: the string to be printed
*
* This function takes a string as input
* and prints it in reverse order,
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i] + 0);
	}
	_putchar('\n');
}
