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
		str;
	}
	char *p = malloc(length + 1);

	if (str == NULL || *str == '\0')
	{
        return (NULL);
    }

}