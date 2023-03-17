#include <stdio.h>
/**
 * main prints letter
 *print letters from a-z A-z
 * return 0
 */
int main(void)
{
	int i;
	char lower[26];
	char upper[26];

	for (i = 0; i < 26 ; i++)
	{
	lower[i] = 'a' + i;
	putchar(lower[i]);
	}
	for (i = 0; i < 26 ; i++)
	{
	upper[i] = 'A' + i;
	putchar(upper[i]);
	}
	putchar('\n');
	return (0);
}
