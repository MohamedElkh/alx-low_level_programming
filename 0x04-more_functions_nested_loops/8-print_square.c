#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: the character to be checked.
 *
 * Description: function that prints a square, followed by a new line.
 * Return: nothing .
 */

void print_square(int size)
{
	int i, j;

	if (size < 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	}
}
