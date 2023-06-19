#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings.
 * @dest: the first pointer to be checked.
 * @src: the second pointer to be checked.
 *
 * Description: a function that concatenates two strings.
 * Return: the result of dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
