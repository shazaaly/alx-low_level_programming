#include "main.h"
#include <stdio.h>
/**
* _strstr - Locates a substring.
* @haystack: Pointer to the string to search.
* @needle: Pointer to the substring to locate.
* Return: A pointer to the beginning of the located substring.
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (needle);
			}
		}
	}
	return (NULL);
}
