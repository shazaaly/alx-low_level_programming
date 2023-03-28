#include "main.h"
#include <stdio.h>
/**
* print_array - Prints n elements of an array of integers
*
* @a: The array of integers to print
* @n: The number of elements to print
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
		printf("%d, ", a[i]);
		}
		else
		{
		printf("%d", a[i]);
		}
	}
	printf("\n");
}
