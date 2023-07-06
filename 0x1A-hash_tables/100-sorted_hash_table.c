#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - func to create a sorted table
 * @size: the size of table
 *
 * Return: the result.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(shash_table_t *) * size);

	if (ht->array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		ht->array[x] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}


/**
 * shash_table_set - func to add elem
 * @ht: pointer
 * @key: added to index
 * @value: the value
 *
 * Return: the result.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *tp, *nw;
	char *v_copy;
	unsigned long int x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}

	v_copy = strdup(value);

	if (v_copy == NULL)
	{
		return (0);
	}

	x = key_index((const unsigned char *)key, ht->size);
	tp = ht->shead;

	while (tp)
	{
		if (strcmp(tp->key, key) == 0)
		{
			free(tp->value);
			tp->value = v_copy;

			return (1);
		}

		tp = tp->snext;
	}

	nw = malloc(sizeof(shash_node_t));

	if (nw == NULL)
	{
		free(v_copy);
		return (0);
	}

	nw->key = strdup(key);

	if (nw->key == NULL)
	{
		free(v_copy);
		free(nw);

		return (0);
	}

	nw->value = v_copy;
	nw->next = ht->array[x];

	ht->array[x] = nw;

	if (ht->shead == NULL)
	{
		nw->sprev = NULL;
		nw->snext = NULL;

		ht->shead = nw;
		ht->stail = nw;
	}
	else if (strcmp(ht->shead->key, key) == 0)
	{
		nw->sprev = NULL;
		nw->snext = ht->shead;

		ht->shead->sprev = nw;
		ht->shead = nw;
	}
	else
	{
		tp = ht->shead;

		while (tp->snext != NULL && strcmp(tp->snext->key, key) < 0)
		{
			tp = tp->snext;
		}

		nw->sprev = tp;
		nw->snext = tp->snext;

		if (tp->snext == NULL)
		{
			ht->stail = nw;
		}
		else
		{
			tp->snext->sprev = nw;
		}

		tp->snext = nw;
	}
	return (1);
}

/**
 * shash_table_get - func to retrive the value
 * @ht: the pointer
 * @key: get the value
 *
 * Return: the result
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nd;
	unsigned long int x;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	x = key_index((const unsigned char *)key, ht->size);

	if (x >= ht->size)
	{
		return (NULL);
	}

	nd = ht->shead;

	while (nd != NULL && strcmp(nd->key, key) != 0)
	{
		nd = nd->snext;
	}

	return ((nd == NULL) ? NULL : nd->value);
}

/**
 * shash_table_print - func print sorted table
 * @ht: a pointer
 *
 * Return: nothing.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
	{
		return;
	}

	nd = ht->shead;
	printf("{");

	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->snext;

		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - func to sort data
 * @ht: pointer to be checked
 *
 * Return: nothing.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
	{
		return;
	}

	nd = ht->stail;
	printf("{");

	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->sprev;

		if (nd != NULL)
		{
			printf(", ");
		}
	}

	printf("}\n");
}

/**
 * shash_table_delete - func to delete the data
 * @ht: the pointer to hash
 *
 * Return: nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *nd, *tp;
	shash_table_t *hd = ht;

	if (ht == NULL)
	{
		return;
	}

	nd = ht->shead;

	while (nd)
	{
		tp = nd->snext;
		free(nd->key);
		free(nd->value);

		free(nd);
		nd = tp;
	}

	free(hd->array);
	free(hd);
}

