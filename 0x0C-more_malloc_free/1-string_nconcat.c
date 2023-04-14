#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - concatenate two strings up to n bytes
* @s1: first string
* @s2: second string
* @n: maximum number of bytes to concatenate from s2
*
* Return: pointer to newly allocated memory containing concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int i;
	unsigned int j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
