#include "lists.h"

/**
 * print_list - function that prints all the elements
 * @h: pointer to be checked.
 *
 * Return: the lengths of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t value = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;

		value++;
	}
	return (value);
}
