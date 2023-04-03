#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: the singly linked lists
 * @index: the character to be checked.
 *
 * Description: function that returns the nth node
 * Return: the result.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head->next; i++)
	{
		head = head->next;
	}
	if (i < index)
	{
		return (NULL);
	}
	return (head);
}
