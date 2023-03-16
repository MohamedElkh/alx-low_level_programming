#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the character to be checked
 *
 * Description: a function that allocates memory using malloc
 * Return: the resutl.
 */

void *malloc_checked(unsigned int b)
{
	void *value;

	value = malloc(b);

	if (value == NULL)
	{
		exit(98);
	}
	return (value);
}
