#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements.
 * @h: the pointer to be checked.
 *
 * Description: function that prints all the elements
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x, li = 0;

	for (x = 0; h != NULL; x++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		li++;
	}
	return (li);
}
