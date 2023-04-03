#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: singly linked list
 * @idx: the character to be checked
 * @n: the character to be checked
 *
 * Description: function that inserts a new node
 * Return: the result.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *newvalue, *val;

	newvalue = (listint_t *) malloc(sizeof(listint_t));
	if (newvalue == NULL)
		return (NULL);
	newvalue->n = n;
	if (*head == NULL)
	{
		*head = newvalue;
		newvalue->next = NULL;
		return (newvalue);
	}
	if (idx == 0)
	{
		newvalue->next = *head;
		*head = newvalue;
		return (newvalue);
	}
	val = *head;
	while (x < (idx - 1) && val->next)
	{
		val = val->next;
		x++;
	}
	if (x < idx - 1)
		return (NULL);
	newvalue->next = val->next;
	val->next = newvalue;
	return (newvalue);
}
