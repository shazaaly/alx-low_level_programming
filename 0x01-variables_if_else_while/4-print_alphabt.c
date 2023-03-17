#include <stdio.h>
/**
 *  * main - function : function prints letters
 *
 * This function prints all lowercase letters except for 'e' and 'q'.
 *
 * Return: 0 upon successful completion of the progra
 */
int main(void)
{
	int i;
	char letters[26];

	for (i = 0; i < 26; i++)
	{
		letters[i] = 'a' + i;
		if (letters[i] != 'q' && letters[i] != 'e')
		{
		putchar(letters[i]);
		}
	}
	putchar('\n');
	return (0);
}
