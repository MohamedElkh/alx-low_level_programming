#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: singly linked list
 * @index: character to be checked
 *
 * Description: function that deletes the node at index
 * Return: the result.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *val;
	listint_t *newvalue;

	if (*head == NULL)
		return (-1);
	newvalue = *head;
	if (index == 0)
	{
		*head = newvalue->next;
		free(newvalue);
		return (1);
	}
	while (x < index && newvalue->next)
	{
		val = newvalue;
		newvalue = newvalue->next;
		x++;
	}
	if (x < index)
		return (-1);
	val->next = newvalue->next;
	free(newvalue);
	return (1);
}
