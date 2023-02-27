#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: the pointer to be checked.
 * @b: the second pointer to be checked.
 *
 * Description: a function that swaps the values of two integers.
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
