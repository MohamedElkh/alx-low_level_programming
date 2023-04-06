#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * @n: the character to be checked
 * @index: the character to be checked
 *
 * Return: the result.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}
	n >>= index;

	if ((n & 1) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
