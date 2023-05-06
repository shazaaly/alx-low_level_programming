#include <stdio.h>
#include "main.h"
#include <string.h>
#include <math.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (*b == '\0')
	{
		return (0);
	}
	n = binary_to_uint(b + 1);

	if (*b == '1')
	{
		return n + (pow(2, strlen(b) - 1));
	}
	else if (*b == '0')
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
