#include <stdio.h>

/*
 * * main function entry : print letters
 * Return : success : 0
 */

int main(void)
{
	char letters[26];
	int i;

	for (i = 0; i < 26 ; i++)
	{
	letters[i] = 'a' + i;
	}
	for (i = 0; i < 26 ; i++)
	{
	putchar(letters[i]);
	}
	putchar('\n');

	return (0);
}
