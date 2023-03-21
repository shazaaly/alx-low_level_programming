#include <stdio.h>
#include "main.h"
/*
 * function to print alphabet ten times
 */
 
/**
*  *print_alphabet_x10 : function prints letters
*
* This function prints all lowercase letters except for 'e' and 'q'.
*
* Return: 0 upon successful completion of the progra
*/
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

