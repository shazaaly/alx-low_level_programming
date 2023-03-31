#include "main.h"
/**
* cap_string - Capitalizes all words in a string.
* @str: Pointer to the string to be modified.
* Return: Pointer to the modified string.
*/
char *cap_string(char *str)
{
	int i;
	
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
