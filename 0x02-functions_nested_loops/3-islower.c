#include <stdio.h>
#include "main.h"
/*
* _islower - function that checks for lowercase character.
* return 1 or 0
*/
/**
*  *int _islower - function prints letters small caps.
*
* This function prints all lowercase letters except.
*
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
