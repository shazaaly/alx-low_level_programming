#include <stdio.h>
#include "main.h"
/**
* _isupper - checks if a character is uppercase
* @c: the character to be checked
*
* Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 120)
	{
		return (0);
	}
}
