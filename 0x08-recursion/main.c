#include "main.h"
#include <stdio.h>
#include <unistd.h>

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 1 && n % 2 == 0)
	{
		return (n / 2 / (_sqrt_recursion(n / 2)));
	}
	else
	{
		return (1);
	}
}

 int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}