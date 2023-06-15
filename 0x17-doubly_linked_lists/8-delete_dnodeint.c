#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * node_len - function to count
 * @n: the linked list
 *
 * Return: the number
 */

size_t node_len(dlistint_t **n)
{
	dlistint_t *st;
	size_t le = 0;

	st = *n;

	while (st != NULL)
	{
		le += 1;
		st = st->next;
	}
	return (le);
}

/**
 * delete_dnodeint_at_index - function to delete node
 * @head: the list
 * @index: the index
 *
 * Return: the result.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x;
	unsigned int length = node_len(head);
	dlistint_t *st;

	st = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		st = st->next;
		free(*head);
		*head = st;

		if (st != NULL)
		{
			st->prev = NULL;
		}
		return (1);
	}

	for (x = 0; x <= index -1; x++)
	{
		st = st->next;
		if (!st)
		{
			return (-1);
		}
	}
	if (length -1 == index)
	{
		st->prev->next = NULL;
		free(st);

		return (1);
	}

	st->prev->next = st->next;
	st->next->prev = st->prev;

	free(st);
	return (1);
}
