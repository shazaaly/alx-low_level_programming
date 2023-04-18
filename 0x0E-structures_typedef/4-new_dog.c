#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
* new_dog - creates a new dog structure
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to new dog structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nameptr = malloc(strlen(name) + 1);
	char *ownerptr = malloc(strlen(owner) + 1);
	dog_t *dog;

	if (nameptr == NULL || ownerptr == NULL)
	{
		free(nameptr);
		free(ownerptr);
		return (NULL);
	}
	strcpy(nameptr, name);
	strcpy(ownerptr, owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(nameptr);
		free(ownerptr);
		return (NULL);
	}
	dog->name = nameptr;
	dog->owner = ownerptr;
	dog->age = age;
	return (dog);
}
