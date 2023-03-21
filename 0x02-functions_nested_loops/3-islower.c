#include <stdio.h>
#include "main.h"
/*
 * _islower - function that checks for lowercase character.
*/
/**
 *  *int _islower - function prints letters
 *
 * This function prints all lowercase letters except for 'e' and 'q'.
 *
 * Return: 0 upon successful completion of the progra
 */
int _islower(int c)
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
