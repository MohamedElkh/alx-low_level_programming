#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: the singly linked list
 *
 * Description: function that reverses a listint_t linked list.
 * Return: the result.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *newvalue = NULL;
	listint_t *n = NULL;

	if (head)
	{
		while (*head)
		{
			n = *head;
			*head = (*head)->next;
			n->next = newvalue;
			newvalue = n;
		}
		*head = newvalue;
		return (*head);
	}
	return (NULL);
}
