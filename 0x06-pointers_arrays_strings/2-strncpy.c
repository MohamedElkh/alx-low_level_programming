#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: the pointer to be checked.
 * @src: the second pointer to be checked.
 *
 * Description: Write a function that copies a string.
 * Return: the result of dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{

		dest[i] = src[i];
	}

	for (;i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
