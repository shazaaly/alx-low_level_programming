#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_numbers - prints a variable number of integers
* @separator: string to print between numbers
* @n: number of integers to print
* Description: This function takes a variable number of integer arguments
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		int num = va_arg(list, int);

		printf("%d", num);
		if (i < n - 1)
		{
			printf("%s", separator);

		}
	}

	va_end(list);
	printf("\n");
}
