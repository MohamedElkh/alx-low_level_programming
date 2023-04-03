#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: the signly linked list
 * @n: the character to be checked
 *
 * Description: function that adds a new node at the beginning
 * Return: the result.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newvalue;

	if (head != NULL)
	{
	newvalue = malloc(sizeof(listint_t));
	if (newvalue == NULL)
		return (NULL);

	newvalue->next = *head;
	newvalue->n = n;
	*head = newvalue;
	return (newvalue);
	}
	return (NULL);


}
