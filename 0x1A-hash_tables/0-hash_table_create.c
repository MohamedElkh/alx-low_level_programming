#include "hash_tables.h"

/**
 * hash_table_create - func to create a hash table 
 * @size: the size of the array
 *
 * Return: the result.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x;
	hash_table_t *hash;

	hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
	{
		return (NULL);
	}

	hash->size = size;
	hash->array = malloc(sizeof(hash_table_t *) * size);

	if (hash->array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		hash->array[x] = NULL;
	}
	return (hash);
}
