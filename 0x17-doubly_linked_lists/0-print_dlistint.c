#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - function to print all elements
 * @h: the pointer to be printed
 *
 * Return: the number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int le = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++le;
		h = h->next;
	}
	return (le);
}
