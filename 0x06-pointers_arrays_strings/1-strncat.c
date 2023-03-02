#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: first pointer to be checked.
 * @src: the second pointer to be checked.
 * @n: the character to be checked.
 *
 * Description: a function that concatenates two strings.
 * Return: A pointer to give the result of dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int i, a;

i = 0;
while (dest[i] != '\0')
{
	i++;
}

a = 0;
while (a < n && src[a] != '\0')
{
dest[i] = src[a];
i++;
a++;
}
dest[i] = '\0';
return (dest);
}
