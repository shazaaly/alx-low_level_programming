#include <stdlib.h>

/*
 *  * main function entry
 *   * Return : success : 0
 *    */
int main(void)
{
	int i;
	char lower[26];
	char upper[26];

	for (i= 0; i< 26 ; i++)
	{
	lower[i] = 'a' + i;
	upper[i] = 'A' + i;
	}
	
	for (i= 0; i< 26 ; i++)
        {
         putchar(lower[i]);
         putchar(upper[i]);
	}
	return (0);
}
