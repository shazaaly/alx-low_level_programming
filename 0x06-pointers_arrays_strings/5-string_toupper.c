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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
