#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

int main(int argc , char* argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 3)
	{
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	op_func = get_op_func(argv[3]);
	result = op_func(a, b);
    printf("%d\n", result);

	return (0);
}