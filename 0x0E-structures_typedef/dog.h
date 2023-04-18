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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
