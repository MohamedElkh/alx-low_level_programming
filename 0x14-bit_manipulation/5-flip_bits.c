#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: the character to be checked
 * @m: the character to be checked
 *
 * Return: the result.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 0;
	unsigned long int len;

	len = n ^ m;

	while (len >= 1)
	{
		if ((len & 1) == 1)
		{
			x++;
		}
		len >>= 1;
	}
	return (x);

}
