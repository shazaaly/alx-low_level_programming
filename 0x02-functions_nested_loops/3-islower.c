#include <stdio.h>
#include "main.h"
/*
* _islower - function that checks for lowercase character.
* return 1 or 0
*/
/**
* * _islower - function prints letters small caps.
*
*This function prints all lowercase letters except.
*Parameters - integer
* @c: the character to check
* Return: 1 if c is a lowercase letter, 0 otherwise
*/
(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
