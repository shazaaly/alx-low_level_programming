#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASS_LEN 20

/**
 * main - Generates a random password and prints it to stdout.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[PASS_LEN + 1];
	int i;

	srand(time(NULL));

	int random_num = rand() % 52; /*small + caps*/

	for (i = 0; i < PASS_LEN; i++)
	{

		if (random_num < 26)
		{
			password[i] = 'a' + random_num;
		}
		else
		{
			password[i] = 'A' + (random_num - 26) ;  /*65*/
		}
		password[PASS_LEN] = '\0';

	}
	printf("%s\n", password);
}
