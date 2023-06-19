#include "main.h"
#include <stddef.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: the pointer to be checked.
 * @needle: the second pointer to be checked.
 *
 * Description: a function that locates a substring.
 * Return: 0 Always.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *x = needle;

		while (*i == *x && *x != '\0')
		{
			i++;
			x++;
		}
		if (*x == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
