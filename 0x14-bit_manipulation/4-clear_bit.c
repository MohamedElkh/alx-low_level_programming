#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: the character to be checked
 * @index: the character to be checked
 *
 * Return: the result.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int y = 1;

	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}
	y <<= index;
	*n &= ~y;

	return (1);
}
