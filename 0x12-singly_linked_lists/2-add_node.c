#include "lists.h"

/**
 * _strlength - function to return the length
 * n: the character to be checked.
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

/**
 * add_node - function that adds a new node at the beginning
 * @head: the linked list
 * @str: the string to add
 *
 * Description: function that adds a new node at the beginning
 * Return: 0 Always.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *value;

	if (head != NULL && str != NULL)
	{
		value = (list_t *)malloc(sizeof(list_t));
		if (value == NULL)
			return (NULL);
		value->str = strdup(str);
		value->len = _strlength(str);
		value->next = *head;
		*head = value;
		return (value);
	}
	return (0);

}
