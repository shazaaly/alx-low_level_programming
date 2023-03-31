#include "main.h"
/**
* cap_string - Capitalizes all words in a string.
* @str: Pointer to the string to be modified.
* Return: Pointer to the modified string.
*/
char *cap_string(char *str)
{
	int i;
	char *ptr = str;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (ptr);
}
