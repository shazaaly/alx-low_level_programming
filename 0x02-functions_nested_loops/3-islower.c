#include <ctype.h>
#include <stdio.h>
#include <main.h>
/*
*Write a function that checks for lowercase character.
*/
/**
 *  *int _islower function - function prints letters
 *
 * This function prints all lowercase letters except for 'e' and 'q'.
 *
 * Return: 0 upon successful completion of the progra
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
