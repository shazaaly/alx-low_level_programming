#include "main.h"
#include <stdio.h>
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string of accepted characters.
 * Return: The number of bytes in the initial segment of s which consist
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (counter);
}
