#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: the pointer to be checked.
 *
 * Description: a function that returns the length of a string.
 * Return: 0 Always.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		 i += _strlen_recursion(s + 1);
	}
	return (i);
}
