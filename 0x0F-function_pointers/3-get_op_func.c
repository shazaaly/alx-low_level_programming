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
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
};
while (ops[i].op != NULL)
{
if (*(ops[i].op) == *s)
{
	return (ops[i].f);
}
	i++;
}
return (NULL);
}
