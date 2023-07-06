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
	unsigned long int x;
	hash_node_t *ind;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	x = key_index((const unsigned char *)key, ht->size);

	if (x  >= ht->size)
	{
		return (NULL);
	}

	ind = ht->array[x];

	while (ind && strcmp(ind->key, key) != 0)
	{
		ind = ind->next;
	}

	return ((ind == NULL) ? NULL : ind->value);
}
