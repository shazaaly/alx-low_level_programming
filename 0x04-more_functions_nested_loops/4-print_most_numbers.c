#include <stdio.h>
#include "main.h"
/**
* print_most_numbers - prints the numbers from 0 to 9, followed by a new line,
*                      except for 2 and 4
*
* Return: void
*/
void print_most_numbers(void)
{
	int num = 0;

	do {
		if (num == 2 || num == 4)
		{
			num++;
			continue;
		}
		_putchar(num + 48);
	} while (num >= 0 && num <= 9)
	_putchar('\n');
}
