#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int i;
	int j;
	int x;
	int y;

	for (i = 0; i < 3; i++)
	{
        	for (j = 0; j < 4; j++)
        	{
            		for (x = 0; x < 6; x++)
            		{
                		for (y = 0; y < 10; y++)
                		{
                    			putchar(i + '0');
                    			putchar(j + '0');
                    			putchar(58);
                    			putchar(x + '0');
                    			putchar(y + '0');
                    			putchar('\n');
                }
            }
        }
    }
}
