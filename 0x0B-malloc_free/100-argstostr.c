#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int i;
	int tlength = 0;

	if (ac == 0 || av == NULL)
	{
        return (NULL);
    }

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];
		int len = 0;

		while (arg[len] != '\0')
		{
			len++;
		}
		tlength = len + 1;
	}
	   char *str = (char *) malloc(total_len * sizeof(char));
}