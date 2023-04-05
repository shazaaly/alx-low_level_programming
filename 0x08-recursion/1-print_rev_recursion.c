#include <stdio.h>
#include "main.h"
/**
* _strlen_recursion - returns the length of a string
* @s: pointer to string to find length of
*
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return;
	}
	_strlen_recursion(s + 1);
	i++;
	return (i);
}
