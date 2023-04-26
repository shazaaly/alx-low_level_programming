#include "3-calc.h"
#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
* get_op_func - Selects the correct function to perform the operation
* @s: The operator passed as argument to the program
* Return: A pointer to the function that corresponds to the operator
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
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
		return (ops[i].f);
		i++;
		}
	}
	else
	{
		exit(98);
	}
	return (NULL);
}
