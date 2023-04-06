#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * @n: the character to be checked
 * @index: the character to be checked
 *
 * Return: the result.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((*n |= 1 << index) ? 1 : -1);
}
