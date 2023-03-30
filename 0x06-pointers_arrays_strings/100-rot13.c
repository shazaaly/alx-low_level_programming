#include "main.h"
#include <stdio.h>
/**
* rot13 - Encodes a string using ROT13 substitution cipher.
* @s: String to be encoded.
* Return: Pointer to the encoded string.
*/

char *rot13(char *s)
{
	int i;

	char *ptr = s;
	char in[] = "abcdefghijklmnopqrstuvwxyz";
	char out[] = "nopqrstuvwxyzabcdefghijklm";

	while (*s != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*s == in[i])
			{
				*s = out[i];
				break;
			}
		}
		s++;
	}
	return (ptr);


}
int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}
