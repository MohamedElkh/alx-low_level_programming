#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line.
 * @str: the pointer to be checked.
 *
 * Description: function that prints a string,
 * followed by a new line.
 * Return: nothing.
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0';j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
