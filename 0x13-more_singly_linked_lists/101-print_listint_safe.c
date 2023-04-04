#include "lists.h"

/**
 * _count - function to count unique lists
 * @value: the singly linked lists
 *
 * Return: the result.
 */

size_t _count(const listint_t *value)
{
	const listint_t *val;
	const listint_t *le;
	unsigned int num = 1;

	if (value == NULL || value->next == NULL)
	{
		return (0);
	}
	val = value->next;
	le = (value->next)->next;

	while (le)
	{
		if (val == le)
		{
			val = le;
			while (val != le)
			{
				num++;
				val = val->next;
				le = le->next;
			}
			val = val->next;
			while (val != le)
			{
				num++;
				val = val->next;
			}
			return (num);
		}
		val = val->next;
		le = (le->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t
 * @head: singly linked lists
 *
 * Description: function that prints a listint_t
 * Return: the result.
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int no = 0, i = 0;
	no = _count(head);

	if (no == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			no++;
		}
	}
	else
	{
		for (i = 0; i != no; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (no);
}
