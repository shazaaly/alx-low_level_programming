#include "main.h"
/**
* leet - Encodes a string into 1337.
*
* @str: The string to be encoded.
*
* Return: A pointer to the encoded string.
*/
char *leet(char *str)
{
	char keys[] = {'A', 'O', 'E', 'T', 'L'};
	char values[] = {4, 3, 0, 7, 1};
	int i;

	while (*str)
	{
		for (i = 0; i < sizeof(keys) / sizeof(char); i++)
		{
			if (str[i] == keys[i] || str[i] == keys[i] + 32)
			{
				*str = values[i] + 48;
			}
		}
		str++;
	}
	return str;

}
