#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlist_len - function to count the elems
 * @head: the pointer to count
 *
 * Return: the number of elements
 */

size_t dlist_len(const dlistint_t *head)
{
	int le = 0;

	while (head != NULL)
	{
		++le;
		head = head->next;
	}
	return (le);
}

/**
 * new_node - function to create new nodes
 * @num: the number of new node
 * @next: next node
 * @prev: the previous node
 *
 * Return: the address of the new node
 */

dlistint_t *new_node(unsigned int num, void *next, void *prev)
{
	dlistint_t *n_node = NULL;

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = num;
	n_node->next = next;
	n_node->prev = prev;

	return (n_node);
}

/**
 * insert_dnodeint_at_index - function to insert new node
 * @h: the head
 * @idx: index to be inserted
 * @n: the number
 *
 * Return: the address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counts = 0, le = 0;
	dlistint_t *curr = NULL, *node = NULL;

	if (h == NULL)
	{
		return (NULL);
	}
	if (*h == NULL && idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	le = dlist_len(*h);

	if(idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (le == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	curr = *h;

	while (curr != NULL)
	{
		if (counts == idx)
		{
			node = new_node(n, curr, curr->prev);
			curr->prev = node;
			curr = node;

			curr->prev->next = node;
			return (node);
		}
		curr = curr->next;
		++counts;
	}
	return (curr);
}
