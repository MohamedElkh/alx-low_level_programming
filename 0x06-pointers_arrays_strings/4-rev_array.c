#include "main.h"

/**
 * reverse_array - a function that reverses the content.
 * @a: the pointer to be checked.
 * @n: the character to be checked.
 *
 * Description: a function that reverses the content
 * of an array of integers.
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, q;

	for (i = n - 1; i >= n / 2; i--)
	{
		q = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = q;
	}
}
