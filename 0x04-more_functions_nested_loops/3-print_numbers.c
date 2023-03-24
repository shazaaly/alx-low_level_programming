#include <stdio.h>
#include "main.h"
/**
* print_numbers - prints the numbers from 0 to 9, followed by a new line
*
* Return: void
*/
void print_numbers(void)
{
	int nums[] = {49, 50, 51, 52, 53, 54, 55, 56, 57};
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(nums[i]);
	}
	_putchar('\n');
}
