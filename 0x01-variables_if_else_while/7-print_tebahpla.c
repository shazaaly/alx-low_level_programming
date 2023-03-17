#include <stdio.h>
/**
 * main - function : function prints letters
 *
 * This function prints all lowercase letters except for 'e' and 'q'.
 *
 * Return: 0 upon successful completion of the prog
 */

int main(void)
{
	int i;
	char letters[25];

	for (i = 25; i >= 0; i--)
	{
	letters[i] = 'a' + i;
	putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
