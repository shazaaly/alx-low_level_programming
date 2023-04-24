#include "variadic_functions.h"
/**
* print_all - prints a list of arguments of various types
* @format: a string of format specifiers for the arguments
* Description: This function takes a string of format specifiers and a variable
* number of arguments, and prints each argument according to its corresponding
* format specifier. The format specifiers can be 'c' (char), 'i' (integer),
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;
	char *str = "";
	char c;
	int num;
	float fnum;

if (str == NULL)
{
	printf("(nil)");
}
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

			printf("%s", str);
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
		if (format[i + 1] && (format[i] == 'c'
		|| format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
	i++;
	}
	va_end(list);
	printf("\n");
}
