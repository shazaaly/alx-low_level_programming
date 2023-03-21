#include <stdio.h>
#include "main.h"
/*
*Write a function that prints 10 times the alphabet.
*in lowercase, followed by a new line.
*/
/**
*  *print_alphabet_x10 -  function prints lettersi ten times.
*
* This function prints all lowercase letters except for 'e' and 'q'.
*
* Return: 0 upon successful completion of the progra
*/
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
