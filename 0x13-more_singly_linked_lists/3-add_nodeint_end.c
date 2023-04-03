#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: the singly linked list
 * @n: the value to be added
 *
 * Description: function that adds a new node at the end
 * Return: the result.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newvalue, *end;

	end = *head;
	newvalue = (listint_t *) malloc(sizeof(listint_t));
	if (newvalue == NULL)
		return (NULL);
	newvalue->n = n;
	newvalue->next = NULL;
	if (*head == NULL)
	{
		*head = newvalue;
		return (newvalue);
	}
	while (end->next)
	{
		end = end->next;
	}
	end->next = newvalue;
	return (newvalue);
}
