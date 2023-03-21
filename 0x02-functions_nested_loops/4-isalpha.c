#include <stdio.h>
/*
* _isalpha - function that checks for lowercase character.
* return 1 or 0
*/
/**
* *  _isalpha - function prints letters small caps and upper.
*
*This function prints all small and upper alpha.
*Parameters - integer
* @c: the character to check
* Return: 1 if c is a lowercase letter, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 120))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
