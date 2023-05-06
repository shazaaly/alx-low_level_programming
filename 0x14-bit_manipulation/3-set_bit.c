#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* set_bit - sets the value of a bit at a given index to 1
* @n: a pointer to the unsigned long integer to modify
* @index: the index of the bit to set.
* Return: 1 on success, or -1 if an error occurs
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= mask;
	return (1);
}

