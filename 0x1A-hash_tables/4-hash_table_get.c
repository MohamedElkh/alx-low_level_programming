#include "hash_tables.h"

/**
 * hash_table_get - func to retrive the value
 * @ht: the pointer to table
 * @key: the char to get the value
 *
 * Return: the result.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ind;
	unsigned long int x;

	if (!ht || !key)
	{
		return (NULL);
	}

	x = key_index((const unsigned char *)key, ht->size);
	ind = ht->array[x];

	while (ind)
	{
		if (strcmp(ind->key, key) == 0)
			return (ind->value);

		ind = ind->next;
	}
	return (NULL);
}
