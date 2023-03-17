#include <stdio.h>
/*
 *  When I was having that alphabet soup, I never thought that it would pay off
 */


/**
 * main - function : function prints letters
 * Return : value
 */
int main(void)
{
	int i;
	char letters[26];
	for (i = 0; i < 26; i++)
	{
	letters[i] = 'a' + i;
	if ( letters[i] != 'q' | letters[i] != 'e')
	{
	putchar(letters[i]);
	}
	}
	putchar('\n');
	return 0;
}
