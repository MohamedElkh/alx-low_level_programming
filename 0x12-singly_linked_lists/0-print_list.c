#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - a function that prints all the elements
 * @h: the pointer of struct.
 *
 * Return: the result.
 */

size_t print_list(const list_t *h)
{
	size_t x;
	const list_t *val = h;
	size_t length = 0;

	for (x = 0; val; x++)
	{
		if (val->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", val->len, val->str);
		}
		val = val->next;
		length++;
	}
	return (length);

}
