#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Copies n bytes from src to dest.
 *
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source buffer.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination buffer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
