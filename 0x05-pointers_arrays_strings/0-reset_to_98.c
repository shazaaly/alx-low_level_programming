#include <stdio.h>
#include "main.h"
/**
* @brief Resets the value of an integer variable to 98.
*
* This function takes a pointer to an integer variable and updates its value
* to 98 using the dereference operator (*).
*
* @param n A pointer to an integer variable.
*/
void reset_to_98(int *n)
{
	*n = 98;
}
