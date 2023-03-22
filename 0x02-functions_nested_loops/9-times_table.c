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
               _putchar(res + '0');
	       _putchar(44);
	       _putchar(' ');
               _putchar(' ');
            }
            else
            {
                _putchar(res / 10 + '0');
                _putchar(res % 10 + '0');
               _putchar(44);
	       	_putchar(' ');
            }
        }
        putchar('\n');
    }
}
