#include "hash_tables.h"

/**
* key_index - gives the index pf a key
* @key: key to access the value
* @size: size of the array
* Return: index of the key/value pair
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
