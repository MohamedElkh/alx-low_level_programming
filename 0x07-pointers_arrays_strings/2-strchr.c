#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: the pointer to string.
 * @c: the character to be checked.
 *
 * Description: a function that locates a character in a string.
 * Return: string Always.
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return (NULL);
}
