#include "main.h"
/**
* rev_string - Reverses a string
*
* @s: The string to reverse myshool
*/
void rev_string(char *s)
{
	int i = 0;
	int j;
	int temp;

	while (s[i] != '\0')
	{
		++i;
	}
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}
