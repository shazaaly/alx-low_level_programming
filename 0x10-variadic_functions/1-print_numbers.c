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
	for (i = 0; i < n; i++)
	{
		int num = va_arg(list, int);

		if (separator == NULL)
		{
			printf("%d", num);
		}
		else if (i < n - 1 && separator != NULL)
		{
			printf("%d", num);
			printf("%s", separator);
		}
		else
		{
			printf("%d", num);
		}
		}

	va_end(list);
	printf("\n");
}

