#include <main.h>
#include <stdio.h>
#include <string.h>
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
	int res = 0;

	while(*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return  ((int)*s1 - (int)*s);
			break;
		}
		s1++;
		s2++;
	}

	 return  ((int)*s1 - (int)*s);
}
