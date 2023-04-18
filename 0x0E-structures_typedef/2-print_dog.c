#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog - Prints the attributes of a struct dog made previously
* @d: Pointer to the struct dog to be printed
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
