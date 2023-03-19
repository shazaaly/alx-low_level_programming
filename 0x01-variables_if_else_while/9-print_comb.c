#include <stdio.h>
/*
 * prints all possible combinations of single-digit numbers
 *  use the putchar function
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

	for (i=0; i < 10; i++)
	{
		if(i <= 8)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(i + '0');
			putchar('$');
		}
	}
	return (0);
}
