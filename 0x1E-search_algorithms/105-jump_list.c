#include "search_algos.h"

/**
 * jump_list - func to search for the value
 * @list: the input list
 * @size: the size of the array
 * @value: the value to search in it
 * Return: the result index of number
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *pre;
	size_t index, km, mk;

	if (list == NULL || size == 0)
	{
		return (NULL);
	}

	mk = (size_t)sqrt((double)size);
	index = 0;
	km = 0;

	do {
		pre = list;
		km++;
		index = km * mk;

		while (list->next && list->index < index)
		{
			list = list->next
		}
		if (list->next == NULL && index != list->index)
		{
			index = list->index;
		}
		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);
	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("%d] and [%d]\n", (int)pre->index, (int)list->index);

	for (;pre && pre->index <= list->index; pre = pre->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)pre->index, pre->n);

		if (pre->n == value)
		{
			return (pre);
		}
	}
	return (NULL);
}
