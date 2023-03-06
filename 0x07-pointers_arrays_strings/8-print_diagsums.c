#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: the pointer to be checked.
 * @size: the character to be checked.
 *
 * Description: function that prints the sum of the two diagonals
 * Return: nothing.
 */

void print_diagsums(int *a, int size)
{
	int r, x;
	int num1 = 0, num2 = 0;

	for (r = 0; r <= (size * size); r = r + size + 1)
	{
		num1 += a[r];
	}
	for (x = size - 1; x <= (size * size) - size; x = x + size - 1)
	{
		num2 += a[x];
	}
	printf("%d, %d\n", num1, num2);
}
