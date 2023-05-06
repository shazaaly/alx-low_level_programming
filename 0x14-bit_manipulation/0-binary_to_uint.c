#include <stdio.h>
#include "main.h"
#include <string.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (*b == '\0')
	{
		return (0);
	}

	if (*b != '0' && *b != '1')
	{
		return (0);
	}
	n = binary_to_uint(b + 1);

	if (*b == '1')
	{
		return (n << 1 | 1);
	}
	else if (*b == '0')
	{
		return (n << 1);
	}
	else
	{
		return (0);
	}
}
