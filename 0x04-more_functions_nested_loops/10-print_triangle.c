#include "main.h"

/**
 * print_triangle - a function that prints a triangle.
 * @size: the character to be checked.
 *
 * Description: a function that prints a triangle,
 * followed by a new line.
 * Return: nothing.
 */

void print_triangle(int size)
{
	int a, i, q;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (a = 0; a < size; a++)
		{
			for (i = size - a; i > 1; i--)
			{
				_putchar(35);
			}

			for (q = 0; q <= a; q++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}	
}
