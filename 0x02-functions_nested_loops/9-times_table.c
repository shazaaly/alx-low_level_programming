#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, res;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            res = i * j;
            if (res < 10)
            {
                putchar(res + '0');
                putchar(' ');
                putchar(' ');
            }
            else
            {
                putchar(res / 10 + '0');
                putchar(res % 10 + '0');
                putchar(' ');
            }
        }
        putchar('\n');
    }
}
