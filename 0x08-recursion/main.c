#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 int _putchar(char c)
{
	return (write(1, &c, 1));
}


int main(void)
{
	char *s = "Shaza Alu";
		if (*s == '\0')
	{
		return (0);
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
     return (0);
}