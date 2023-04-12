#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - Concatenates two strings.
* @s1: The first string to concatenate.
* @s2: The second string to concatenate.
*
* Return: If s1 or s2 is NULL or if malloc() fails - NULL
*         Otherwise - a pointer to the concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int i;
	unsigned int j;
	char *concat;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[s1len] != '\0')
	{
		s1len++;
	}
	while (s2[s2len] != '\0')
	{
		s2len++;
	}
	concat = malloc((s1len + s2len + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1len; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < s2len; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[s1len + s2len] = '\0';
	return (concat);
}
