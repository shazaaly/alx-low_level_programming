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

 unsigned long check_sum(char *str)
 {
	unsigned long sum = 0;

	while (*str != '\0')
	{
		sum += *str;
		str++;

	}
	return (sum);

 }
int main(void)
{
	char password[PASS_LEN + 1];
	int i;
	int sum = 0;
	int random_num;

	srand(time(NULL));

	random_num = rand() % 52; /*small + caps*/

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
	for ( i = 0; i < 20; i++)
	{
		sum = '0' + password[i];

	}
	return (sum);
}
