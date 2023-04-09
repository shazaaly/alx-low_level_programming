<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
=======
#include "main.h"
#include <stdio.h>
/**
* _memset - Fills memory with a constant byte.
* @s: Pointer to the memory area to be filled.
* @b: The byte to fill the memory area with.
* @n: The number of bytes to fill.
* Return: A pointer to the filled memory area.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n == 0)
	{
		return (s);
	}
	for (i = 0; i < n; i++)
	{
		if (b == 0)
		{
			s[i] = 0;
		}
		else
		{
			s[i] = b;
		}
	}
	return (s);
}
>>>>>>> 7cb80777366755c24268c560dfe228ab73648c13
