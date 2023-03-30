#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * @head: the linked list.
 * @str: the string to be added
 *
 * Description: function that adds a new node at the end
 * Return: 0 Always.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_value, *val;

	if (str != NULL)
	{
		new_value = (list_t *)malloc(sizeof(list_t));
		if (new_value == NULL)
			return (NULL);
		new_value->str = strdup(str);
		new_value->len = _strlength(str);
		new_value->next = NULL;

		if (*head == NULL)
		{
			*head = new_value;
			return (*head);
		}
		else
		{
			val = *head;
			while (val->next)
			{
				val = val->next;
			}
			val->next = new_value;
			return (val);
		}
	}
	return (NULL);
}
/**
 * _strlength - count the length of string
 * @n: the character to be checked
 *
 * Return: the result.
 */

int _strlength(const char *n)
{
	int x = 0;

	while (*n != '\0')
	{
		n++;
		x++;
	}
	return (x);
}
