#include "main.h"
/**
* rot13 - Encodes a string using ROT13 substitution cipher.
* @s: String to be encoded.
* Return: Pointer to the encoded string.
*/
char *rot13(char *s)
{
	char *ptr = s;
	int i, j;

	char in[] = "abcdefghijklmnopqrstuvwxyz";
	char out[] = "nopqrstuvwxyzabcdefghijklm";

	while (*s)
	{
		for (i = 0; i < 26; i++)
		{
			if (*s == in[i])
			{
				*s = out[i];
				break;
			}
		}
		s++;
	}
	return (ptr);


}