#include <stdio.h>
/*
 * The numbers should range from 0 to 99
 * 00 01 and 01 00 are considered as the same
 * prints all possible combinations of two two-digit numbers.
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
	int i, j, z, w;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (z = 0; z <= 9; z++)
			{
				for (w = 0; w <= 9; w++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(z + '0');
					putchar(w + '0');
					if (i != 9 || j != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
