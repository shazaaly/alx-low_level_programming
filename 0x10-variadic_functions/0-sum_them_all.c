#include "variadic_functions.h"
/**
* sum_them_all - returns the sum of all its parameters
* @n: the number of parameters
* Return: the sum of all parameters, or 0 if n is 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
