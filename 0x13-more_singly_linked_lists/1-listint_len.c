#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: pointer singly linked list
 *
 * Description: function that returns the number of elements
 * Return: the result.
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			len++;
		}
	}
	return (len);
}
