#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
* init_dog - initializes a dog structure with given values
* @d: pointer to a struct dog to be initialized
* @name: pointer to a char representing the dog's name
* @age: float representing the dog's age
* @owner: pointer to a char representing the dog's owner's name
* Description: This function takes in a pointer to a struct dog and initializes
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
