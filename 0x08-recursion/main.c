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
		return (_strlen_recursion(s + 1) + 1);
	}
}

 int _putchar(char c)
{
	return (write(1, &c, 1));
}


int main(void)
{
    int n;

    n = _strlen_recursion("Shaza Aly Othman  ");
    printf("%d\n", n);
    return (0);
}