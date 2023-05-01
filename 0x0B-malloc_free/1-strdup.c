#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - Returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: The string to duplicate
* Return: If str is NULL or if malloc() fails - NULL
*/
char *_strdup(char *str)
{
	char *newstr;
	unsigned int i = 0;
	unsigned int j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	newstr = malloc(i + 1);
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i + 1; j++)
	{
		newstr[j] = str[j];
	}
	return (newstr);

}

