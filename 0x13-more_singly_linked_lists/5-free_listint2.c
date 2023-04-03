#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: singly linked lists
 *
 * Description: a function that frees a listint_t list.
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *newvalue;

	if (head == NULL)
	{
		return;
	}
	else
	{
		while (*head)
		{
			newvalue = *head;
			*head = (*head)->next;
			free(newvalue);
		}
	}
	head = NULL;

}
