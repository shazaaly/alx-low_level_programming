#ifndef DOG_H
#define DOG_H
/**
* struct dog - a structure representing a dog
* @name: a pointer to a char representing the dog's name
* @age: a float representing the dog's age
* @owner: a pointer to a char representing the dog's owner's name
* Description: This structure represents a dog, and contains information
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
