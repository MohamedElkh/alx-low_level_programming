#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: singly linked lists
 *
 * Description: function that returns the sum of all the data (n)
 * Return: the result.
 */

int sum_listint(listint_t *head)
{
	int val = 0;

	if (head != NULL)
	{
		while (head)
		{
			val += head->n;
			head = head->next;
		}
	}
	return (val);
}
