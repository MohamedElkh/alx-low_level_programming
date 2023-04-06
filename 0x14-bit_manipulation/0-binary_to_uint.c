#include "main.h"
/**
 * -count - function the count the length
 *  @n: the character to be checked.
 *
 *  Return: the length
 */

int _count(const char *n)
{
	int x = 0;

	while (n[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * binary_to_uint - function that converts a binary number
 * @b: the character to be checked
 *
 * Return: the result.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 1, a = 0, le;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	le = _count(b);

	for (i = le - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			a += x;
		}
		x *= 2;
	}
	return (a);
}
