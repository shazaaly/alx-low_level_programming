#include <stdio.h>
#include <main.c>
/*
 * Write a function that prints the alphabet, 
 * in lowercase, followed by a new line.
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
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	putchar('\n');
	return (0);
}
