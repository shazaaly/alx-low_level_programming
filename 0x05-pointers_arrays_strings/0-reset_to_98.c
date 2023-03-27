#include <stdio.h>
#include "main.h"
/**
* reset_to_98 - updates the value of an integer variable to 98
* @n: a pointer to an integer variable
*
* This function takes a pointer to an integer variable and updates its value
* to 98 using the dereference operator (*).
*/
void reset_to_98(int *n)
{
	*n = 98;
}
