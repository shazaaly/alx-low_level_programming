#include "function_pointers.h"
/**
* print_name - prints a name
* @name: pointer to a string containing a name
* @f: pointer to a function that takes a string parameter and returns void
* Description: This function takes a pointer to a string containing a name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
