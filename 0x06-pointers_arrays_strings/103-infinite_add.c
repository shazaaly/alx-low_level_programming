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
	int i = 0, j = 0, large = 0;

	while (n1[i] != '\0')
	{
		i++;
	}
	while (n2[j] != '\0')
	{
		j++;
	}
	if (i > j)
	{
		large = i;
	}
	else
	{
		large = j;
	}
	/* check if larger sting of ints is > size*/
	if (large + 1 > size_r)
	{
		return (0);
	}
	r[large] = '\0';
	while (i >= 0 || j >= 0)
	{
		int digit1  = n1[i] - '0';
		int digit2 = n2[j] - '0';
		int sum = digit1 + digit2;

	}
	return r;
}
