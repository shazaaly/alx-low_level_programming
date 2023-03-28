#include "main.h"
/**
* puts_half - Prints the half of a string
*
* @str: The string to print
*/
void puts_half(char *str)
{
	    char *str;
    int i = 0;
    int j;

    while (str[i] != '\0')
    {
        ++i;
    }
    if (i % 2 == 0)
    {
        for (j = i - 1; j >= i / 2; j--)
        {
            putchar(str[j]);
        }
    }
    else
    {
        putchar(str[j] + 1);
    }
}
