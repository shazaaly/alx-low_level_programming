#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog - Prints the attributes of a struct dog
* @d: Pointer to the struct dog to be printed
*/
void print_dog(struct dog *d)
{
	char *name = d->name != NULL ? d->name : "(nil)";
	char *owner = d->owner != NULL ? d->owner : "(nil)";
	float age = d->age;

	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", name);
	printf("Age: %f\n", age);
	printf("Owner: %s\n", owner);
}
