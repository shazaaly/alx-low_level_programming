#include "main.h"
/**
* cap_string - Capitalizes all words in a string.
* @str: Pointer to the string to be modified.
* Return: Pointer to the modified string.
*/
char *cap_string(char *str)
{
	int i = 1;
	
	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
		str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
		str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
		str[i - 1] == '}') && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
