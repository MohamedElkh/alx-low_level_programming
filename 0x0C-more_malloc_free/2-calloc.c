#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array.
 * @nmemb: the character to be checked.
 * @size: the character to be checked
 *
 * Return: 0 Always.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, z = 0;
	char *name;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = nmemb * size;
	name = malloc(x);

	if (name == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		name[z] = 0;
	return (name);
}
