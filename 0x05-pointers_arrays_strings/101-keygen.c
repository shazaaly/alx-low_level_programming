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
	char password[PASS_LEN];
	int i;
	int sum = 0;
	int random_num;

	srand(time(NULL));


	for (i = 0; i < PASS_LEN; i++)
	{
		random_num = rand() % 78;

		password[i] = random_num + '0';

		sum += password[i];

	}
	password[PASS_LEN] = '\0';
	printf("%ul\n", sum);

	return (0);
}
