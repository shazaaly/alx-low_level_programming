#include "main.h"
/**
* leet - Encodes a string into 1337.
* @str: The string to be encoded.
* Return: A pointer to the encoded string.
*/
char *leet(char *str)
{
	char *pt = str;
	char keys[] = {'A', 'O', 'E', 'T', 'L'};
	char values[] = {'4','3', '0', '7', '1'};
	int i;

	while (*str)
	{
		for (i = 0; i < sizeof(keys) / sizeof(char); i++)
		{
			if (str[i] == keys[i] || str[i] == keys[i] + 32)
			{
				str[i] = values[i];
			}
		}
		str++;
	}
	return (pt);

}
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
