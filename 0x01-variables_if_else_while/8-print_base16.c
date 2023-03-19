#include <stdio.h>
/*
 * Write a program that print
 * numbers of base 16 in lowercase,
 * followed by a new line. 
 */
/**
 *  * main - function : function prints letters
 *
 * This function prints all lowercase letters except for 'e' and 'q'.
 *
 * Return: 0 upon successful completion of the progra
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else 
		{
			putchar(i - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
