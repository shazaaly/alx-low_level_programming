#include "variadic_functions.h"


void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;
	char *str;
	char c;
	int num;
	float fnum;
	va_start(list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			c = va_arg(list, int);
			printf("%c", c);
			break;

			case 's':
			str = va_arg(list, char*);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
			break;

			case 'i':
			num = va_arg(list, int);
			printf("%d", num);
			break;

			case 'f':
			fnum = va_arg(list, double);
			printf("%f", fnum);
			break;
		}
		if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
            format[i] == 'f' || format[i] == 's'))
			{
				printf(", ");
			}
	i++;
	}

	va_end(list);
	printf("\n");
}
