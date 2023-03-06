#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: pointer to array.
 *
 * Description: a function that prints the chessboard.
 * Return: nothing.
 */

void print_chessboard(char (*a)[8])
{
	int r, z;

	for (r = 0; r < 8; r++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar(a[r][z]);
		}
		_putchar('\n');
	}
}
