#include "lists.h"
#include <stddef.h>

/**
 * list_len - function that returns the number of elements
 * @h: the pointer to be checked.
 *
 * Description: function that returns the number of elements
 * Return: the result.
 */

size_t list_len(const list_t *h)
{
	size_t value = 0;

	while (h != NULL)
	{
		h = h->next;
		value;
	}
	return (value);

}
