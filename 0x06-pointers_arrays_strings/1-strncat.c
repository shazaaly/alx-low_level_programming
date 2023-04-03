#include "main.h"
#include <string.h>
/**
* _strncat - Concatenates two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
* @n: Maximum number of bytes to concatenate from @src.
* Return: Pointer to the resulting string @dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
