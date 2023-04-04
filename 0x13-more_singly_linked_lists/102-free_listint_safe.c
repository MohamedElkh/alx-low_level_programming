#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: the singly linked lists
 *
 * Return: the result.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *value = NULL;
	unsigned int num = 0;

	while (*h != NULL)
	{
		num++;
		value = *h;
		*h = (*h)->next;
		free(value);

		if ((value->next) >= value)
		{
			*h = NULL;
			return (num);
		}
	}
	*h = NULL;
	return (num);
}
