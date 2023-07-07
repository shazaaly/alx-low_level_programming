#include "hash_tables.h"

/**
* key_index - returns the index of a key in a hash table
* @key: key to hash
* @size: size of the hash table
*
* Return: index where the key should be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int = index;
	unsigned long i;

	index = hash_djb2(key) % size;
	return (index);


}
