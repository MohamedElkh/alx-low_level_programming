#include "hash_tables.h"

/**
 * hash_table_delete - func to delete a hash table
 * @ht: the pointer to be checked
 *
 * Return: nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *nd, *tp;
	hash_table_t *hd = ht;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			nd = ht->array[x];

			while (nd != NULL)
			{
				tp = node->next;

				free(nd->key);
				free(nd->value);
				free(nd);

				nd = tp;
			}
		}
	}

	free(hd->array);
	free(hd);
}
