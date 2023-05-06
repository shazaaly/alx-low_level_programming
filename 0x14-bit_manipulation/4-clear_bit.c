#include <stdio.h>
#include "main.h"
/**
* clear_bit - Clear a bit to 0 at a given index
* @n: pointer to the unsigned long int variable to modify
* @index: index of the bit to clear (starting from 0)
* Return: 1 if successful, -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~mask;
	return (1);
}
