#include "main.h"
#include <string.h>
/**
* string_toupper - Changes all lowercase letters of a string to uppercase.
*
* @str: Pointer to the string to modify.
*
* Return: Pointer to the resulting string @str.
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (*str != '\0)
	{
		*str[i] = toupper(*str[i]);
		i++;
	}
	return (str);
}
