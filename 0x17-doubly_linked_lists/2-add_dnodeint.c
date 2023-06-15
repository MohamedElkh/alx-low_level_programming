#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - function to adds new node
 * @head: the head of the list
 * @n: the number of the place
 *
 * Return: the new head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node = NULL;

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;

	if (*head)
	{
		n_node->next = *head;
		n_node->prev = (*head)->prev;

		(*head)->prev = n_node;
		*head = n_node;
		return (*head);
	}
	n_node->next = *head;
	n_node->prev = NULL;

	*head = n_node;
	return (*head);
}
