#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * @head: the singly linked list
 *
 * Description: a function that deletes the head node
 * Return: 0 Always.
 */

int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *newvalue;

	if (*head != NULL)
	{
		newvalue = (*head)->next;
		num = (*head)->n;
		free(*head);
		*head = newvalue;
	}
	return (num);
}
