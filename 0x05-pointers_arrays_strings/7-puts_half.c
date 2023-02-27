#include "main.h"

/**
 * puts_half - The function should print the second half of the string.
 * @str: the pointer to be checked .
 *
 * Description: The function should print the second half of the string
 * Return: nothing.
 */

void puts_half(char *str)
{
	int i, a;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}

	if (i % 2 == 1)
	{
		a = (i - 1) / 2;
		a += 1;
	}
	else
	{
		a = i / 2;
	}

	for (; a < i; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
