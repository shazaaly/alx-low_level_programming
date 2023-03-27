#include "main.h"
/**
* swap_int - swaps the values of two integers
* @a: a pointer to the first integer
* @b: a pointer to the second integer
*
* This function takes two pointers to
* integers and uses a temporary variable
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
