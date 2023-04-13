#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

char **strtow(char *str)
{
	int i = 0;
	int length = 0;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	char *p = malloc((length + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	if (str == NULL || *str == '\0')
	{
        return (NULL);
    }



}