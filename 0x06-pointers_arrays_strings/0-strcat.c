#include "main.h"
#include <string.h>
/**
* _strcat - Concatenates two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
* Return: Pointer to the resulting string @dest.
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
