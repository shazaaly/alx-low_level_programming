#include "main.h"
#include <stdio.h>
/**
* set_string - sets the value of a pointer to a char
*
* @s: a pointer to a pointer to a char
* @to: the new value to set the pointer to
* This function sets the value of the pointer to a char
* Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
