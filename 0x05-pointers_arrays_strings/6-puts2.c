#include "main.h"
/**
* puts2 - Prints every other character of a string, starting with the first
*
* @str: The string to print
*/
void puts2(char *str)
{
	int i;

	while (*str)
	{
		for (i = 0; str[i] != '\0'; i += 2)
		{
			_putchar(str[i] + 0);
		}
	str--;
	}
	_putchar('\n');
}
