#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	int j; int sign = 1; int result = 0;

	while (*s != '\0' && (*s < '0' || *s >'9'))
	{
		if (*s == '-')
		{
			if (*(s+1) >= '0' && *(s + 1) <= '9')
			{
				sign = -sign;
			}

		}
			s++;
	}

	j = 0;
	while(*s != '\0')
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
				result = result * 10 + (s[j] - '0');
				s++;
		}
		else
		{
			return (0);
		}

	}

	return (result * sign);

}