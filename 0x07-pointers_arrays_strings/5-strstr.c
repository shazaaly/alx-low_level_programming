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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
