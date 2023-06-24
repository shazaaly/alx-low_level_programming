#include "main.h"
#include <stdio.h>
/**
* _atoi - Converts a string to an integer.
* @s: The string to convert.
* Return: The integer value of the string.
*/
int _atoi(char *s)
{
	int j;
	int sign = 1;
	int result = 0;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			sign = -sign;
		}
			s++;
	}

	j = 0;
	while (*s != '\0')
	{

		if (s[j] >= '0' && s[j] <= '9')
		{
			result = result * 10 + (s[j] - '0');
			s++;
		}
		else
		{
			break;
		}

	}

	return (result * sign);

}
