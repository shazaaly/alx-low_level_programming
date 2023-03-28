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

    // Count the length of the string
    while (str[i] != '\0')
    {
        ++i;
    }

    // Print the second half of the string
    if (i % 2 == 0)
    {
        j = (i - 1) / 2;
        for (; j < i; j++)
        {
            _putchar(str[j]);
        }
    }
    else
    {
        j = i / 2 + 1;
        _putchar(str[j]);
    }
    _putchar('\n');
}
