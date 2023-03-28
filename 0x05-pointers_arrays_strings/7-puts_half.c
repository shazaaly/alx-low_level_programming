#include "main.h"
/**
* puts_half - Prints the half of a string
*
* @str: The string to print
*/
void puts_half(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        ++i;
    }
    if (i % 2 == 0)
    {
	    int j;

        for (j = i - 1; j >= i / 2; j--)
        {
            _putchar(str[j]);
        }
    }
    else
    {
        _putchar(str[j] + 1);
    }
}
