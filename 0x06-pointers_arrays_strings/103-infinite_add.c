#include "main.h"
/**
* infinite_add - Adds two numbers and stores the result in a buffer.
*
* @n1: First number as a string.
* @n2: Second number as a string.
* @r: Buffer to store the result.
* @size_r: Size of the buffer.
*
* Return: A pointer to the result buffer
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int *ptr = **r;
	r = n1 + n2;
	return (ptr);
}
