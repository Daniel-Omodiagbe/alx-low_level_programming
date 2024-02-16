#include "hash_tables.h"

/**
* *hash_table_create - function that creates a hash table
* @size: size of the array
* Return: a pointer to the newly created hash table or NULL if it fails
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table)
	{
		table->size = size;
		return (table);
	}
	return (NULL);
}
