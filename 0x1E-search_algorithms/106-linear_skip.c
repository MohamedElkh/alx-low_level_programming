#include "search_algos.h"

/**
 * linear_skip - func to search for the value
 * @list: the input list
 * @value: the value to search in it
 * Return: the index of the number
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *gob;

	if (list == NULL)
	{
		return (NULL);
	}

	gob = list;

	do {
		list = gob;
		gob = gob->express;

		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)gob->index, gob->n);
	} while (gob->express && gob->n < value);

	if (gob->express == NULL)
	{
		list = gob;

		while (gob->next)
			gob = gob->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)gob->index);

	while (list != gob->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);

		if (list->n == value)
		{
			return (list);
		}
		list = list->next;
	}
	return (NULL);
}
