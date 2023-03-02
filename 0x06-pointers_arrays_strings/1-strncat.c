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
	int i = 0, a = 0;

	while (dest[i++] != '\0')
	{
		a++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[a++] = src[i];
	}
	return (dest);
}
