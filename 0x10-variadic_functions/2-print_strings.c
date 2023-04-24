#include "variadic_functions.h"


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(list, char *);

		if (str == NULL)
		{
			printf("nil");
		}
		if (separator == NULL)
		{
			printf("%s", str);
		}
		else if(i < n - 1)
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
