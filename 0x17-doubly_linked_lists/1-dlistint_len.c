#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - function to count the number of elems
 * @h: pointer linked list to count
 *
 * Return: the number of elems
 */

size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		++x;
		h = h->next;
	}
	return (x);
}
