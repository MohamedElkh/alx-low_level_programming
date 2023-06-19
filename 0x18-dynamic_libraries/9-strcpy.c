#include "main.h"

/**
 * _strcpy - a function that copies the string pointed.
 * @dest: the pointer to copy the value to it.
 * @src: the pointer to copy the value from it.
 *
 * Description: a function that copies the string pointed
 * to by src.
 * Return: the value of the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
