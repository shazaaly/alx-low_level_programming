#include <stdio.h>
#include "main.h"
/**
* flip_bits - Computes the number of bits that need to be flipped to transform
* @n: The first unsigned long integer.
* @m: The second unsigned long integer.
* Return: The number of bits that need to be flipped to transform @n into @m.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned long int count = 0;

	xor =  n ^ m;  /* puts 1 at different values posithions*/
	while (xor != 0)
	{
		count += xor & 1; /*extract the least significant bit of the XOR*/
		xor >>= 1; /*move loop*/
	}
	return (count);
}
