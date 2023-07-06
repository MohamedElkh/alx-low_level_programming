#include "hash_tables.h"

/**
 * hash_djb2 - func to create a hash_djb2 algorizm
 * @str: the string to be checked
 *
 * Return: the result
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	int x;
	unsigned long int hh;

	hh = 5381;

	while ((x = *str+++))
	{
		hh = ((hh << 5) + hh) + x
	}

	return (hh);
}
