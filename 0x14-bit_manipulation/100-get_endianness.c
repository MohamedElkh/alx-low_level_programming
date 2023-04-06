#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * @void: nothing.
 *
 * Return: the result.
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *val = (char *)&x;

	if (*val)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
