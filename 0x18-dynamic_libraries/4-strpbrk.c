#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - a function that searches a string.
 * @s: the pointer to be checked.
 * @accept: the second pointer to be checked.
 *
 * Description: function that searches a string for any of a set of bytes.
 * Return: 0 Always.
 */

char *_strpbrk(char *s, char *accept)
{
	int z, r;

	for (z = 0; s[z] != '\0'; z++)
	{
		for (r = 0; accept[r] != '\0'; r++)
		{
			if (s[z] == accept[r])
			{
				return (s + z);
			}
		}
	}
	return (NULL);
}
