#include "main.h"
#include <stdio.h>
#include <unistd.h>

int _sqrt_recursion(int n)
{
	int i = 1;
	if (n < 0)
	{
		return (-1);
	}
	if (i > n / 2)
	{
		return (-1);
	}
	return (_sqrt_recursion(i * i)) == n ? i : ++i;

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