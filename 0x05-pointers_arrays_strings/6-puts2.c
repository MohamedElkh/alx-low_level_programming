#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: the pointer to be checked .
 *
 * Description: a function that prints every other character of a string
 * Return: nothing .
 */

void puts2(char *str)
{
	int a, i;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (i = 0; i < a; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
