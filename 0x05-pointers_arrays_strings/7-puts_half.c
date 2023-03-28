#include "main.h"
/**
* puts_half - Prints the half of a string
*
* @str: The string to print
*/
void puts_half(char *str)
{
	    int i = 0;
    int j;
    int length;

    str = "0123456789";
    while (str[i] != '\0')
    {
        ++i;
    }
    for (j = 0; j < i; j++)
    {

        if (i % 2 == 0 && j < i / 2)
        {
            putchar(str[j]);
        }
        if (i % 2 != 0 && j < i / 2)
        {
            putchar(str[j] + 1);
        }
    }
}
