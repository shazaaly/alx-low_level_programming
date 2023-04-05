#include "main.h"
#include <stdio.h>
#include <unistd.h>

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

 int _putchar(char c)
{
	return (write(1, &c, 1));
}


int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}