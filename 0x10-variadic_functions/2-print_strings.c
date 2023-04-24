#include "variadic_functions.h"
/**
* print_strings - prints a variable number of strings
* @separator: string to print between strings
* @n: number of strings to print
* ...: variable arguments containing the strings to print
* Description: This function takes a variable number of string arguments
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(list, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else if (i < n - 1 && str != NULL)
		{
			printf("%s%s", str, separator);
		}
		else
		{
			printf("%s", str);
		}
	}

	va_end(list);
	printf("\n");
}
