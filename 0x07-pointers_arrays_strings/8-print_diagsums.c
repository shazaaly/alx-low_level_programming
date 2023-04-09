#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the main and secondary diagonals
 * @a: pointer to the 1D array representing the square matrix
 * @size: the size of the square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, main_diagonal_sum = 0, sec_diagonal_sum = 0;

	for (i = 0; i < size; i++)
	{
		main_diagonal_sum += *(a + (i * size) + i);
		sec_diagonal_sum += *(a + (i * size) + (size - 1 - i));
	}
printf("%d, %d\n", main_diagonal_sum, sec_diagonal_sum);
}
