#include "lists.h"

/**
 * print_list - a function that prints all the elements
 * @h: the pointer of struct.
 *
 * Description: a function that prints all the elements
 * Return: the result.
 */
size_t print_list(const list_t *h)
{
        int x;
	size_t length = 0;

	for (x = 0; h != NULL; x++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		length++;
	}
	return (length);

}
