#include "hash_tables.h"

/**
 * hash_table_print - func to print a hash table
 * @ht: the pointer to be checked
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	unsigned char name = 0;
	hash_node_t *index;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (name == 1)
			{
				printf(", ");
			}

			index = ht->array[x];

			while (index != NULL)
			{
				printf("'%s': '%s'", index->key, index->value);
				index = index->next;

				if (index != NULL)
				{
					printf(", ");
				}
			}
			name = 1;
		}
	}
	printf("}\n");
}
