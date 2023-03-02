#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: first pointer to be checked.
 * @src: the second pointer to be checked.
 *
 * Description: a function that concatenates two strings.
 * Return: A pointer to give the result of dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, a;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (a = 0; a < n; a++, i++)
	{
		dest[i] = src[a];
	}
	return (dest);
}
