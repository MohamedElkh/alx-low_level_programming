#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in list
 * @head: the singly linked lists
 *
 * Description: a function that finds the loop in a linked list.
 * Return: the result.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *value;
	listint_t *val;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	value = head->next;
	val = (head->next)->next;

	while (val)
	{
		if (value == val)
		{
			value = head;

			while (value != val)
			{
				value = value->next;
				val = val->next;
			}
			return (value);
		}
		value = value->next;
		val = (val->next)->next;
	}
	return (NULL);
}

