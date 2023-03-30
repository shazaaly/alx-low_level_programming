#include "main.h"
/**
* _strcmp - Compares two strings.
*
* @s1: Pointer to the first string to be compared.
* @s2: Pointer to the second string to be compared.
*
* Return: An integer less than, equal to, or greater than zero
*/
int _strcmp(char *s1, char *s2)
{
	    int i, j;

	    while (*s1 != '\0' && *s2 != '\0')
	    {
		    if (*s1 != *s2)
		    {
			    return ((int)*s1 - (int)*s2);
			    break;
		    }
		    s1++;
		    s2++;
	    }

    return ((int)*s1 - (int)*s2);
}
