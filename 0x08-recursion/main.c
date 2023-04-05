#include "main.h"
#include <stdio.h>
#include <unistd.h>

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	return (1 + _strlen_recursion(s + 1));
	}
}

 int _putchar(char c)
{
	return (write(1, &c, 1));
}


int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}