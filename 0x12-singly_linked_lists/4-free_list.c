#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: the pointer to be checked
 *
 * Description: a function that frees a list_t list.
 * Return: the result.
 */

void free_list(list_t *head)
{
	list_t *value, *ch;

	value = head;

	while (value != NULL)
	{
		ch = value->next;
		free(value->str);
		free(value);
		value = ch;
	}
}
