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
	char *p1 = haystack;
	char *p2 = needle;

	while (*p1)
	{
		if (*p1 == *p2)
		{
			char *m = p1;

			while (*m && *p2 && *p2 == *m)
			{
				p2++;
				m++;
			}
			if (!*p2)
			{
				p1 = needle;
				return (p1);
			}
		}
		p1++;
	}
	return (NULL);
}
