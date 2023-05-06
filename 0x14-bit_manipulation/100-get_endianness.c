#include <stdio.h>
#include "main.h"
/**
* get_endianness - checks the endianness of the system
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	int i = 1;
	char *ptr = (char *)&i;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (-1);
	}

}
