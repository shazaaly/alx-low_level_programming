#include <srdio.h>
/*
 *  program that prints all the numbers of base 16 in lowercase, followed by a new line.
 */

/**
 * 8. Hexadecimal
 * main-function : displays letters
 * Return : Success (0)
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
	return (0);
}
