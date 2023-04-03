#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements
 * @h: the character that referrs to linked list
 *
 * Description: a function that prints all the elements
 * Return: the result.
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			len++;
			h = h->next;
		}
	}
	return (len);
}
