#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: singly linked lists
 *
 * Description: a function that frees a listint_t list.
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *newvalue;

	while (head)
	{
		newvalue = head;
		head = head->next;
		free(newvalue);
	}
	free(head);
}
