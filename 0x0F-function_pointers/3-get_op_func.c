#include "3-calc.h"
#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] =
	{
		{"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

	if (*s == '+' || *s == '-' || *s == '*' || *s == '%')
	{
		while (*ops[i].op == *s && *(s + 1) == '\0')
		{
			return ops[i].f;
			i++;
		}
	}
	else
	{
		exit(98);
	}
	return (NULL);
}