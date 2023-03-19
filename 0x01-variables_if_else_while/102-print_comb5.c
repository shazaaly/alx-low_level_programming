#include <stdio.h>
/*
 * prints all possible combinations of two two-digit numbers.
 */
/**
 *  *main - function start entry point
 *  this function returns digits
 *  Return : 0 Success
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
