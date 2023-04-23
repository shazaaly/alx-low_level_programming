#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>

int (*get_op_func(char *s))(int, int)
{
	const int EXPECTED_ARGS = 2;
	op_t ops[] =
	{
		{"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	if (s != '+' || s! = '-' || s != '*' || s != '%')
	{
		return ("Error\n");
		exit(99);
	}
	if (argc != EXPECTED_ARGS)
	{
		return ("Error\n");
		exit(98);
	}
	get_op_func(ops[i]);
}