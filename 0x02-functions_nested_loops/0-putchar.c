#include "main.h"
#include <stdio.h>
/*
 * Write a program that prints _putchar, followed by a new line.
 */
/**
 *  * main - function : function prints letters
 *
 * This function prints all lowercase letters except for 'e' and 'q'.
 *
 * Return: 0 upon successful completion of the progra
 */
int main(void)
{
	char *str = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
