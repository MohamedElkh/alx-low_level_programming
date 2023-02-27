#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the pointer s to be checked .
 *
 * Description: a function that returns the length of a string.
 * Return: the result of length Always.
 */

int _strlen(char *s)
{
	int i;
	i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
