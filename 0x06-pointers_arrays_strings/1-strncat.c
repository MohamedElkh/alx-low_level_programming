#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: the first pointer to be checked.
 * @src: the second pointer to be checked.
 * @n: the character to be checked.
 *
 * Description: a function that concatenates two strings.
 * Return: the result of dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int i, a;

for (i = 0; dest[i] != '\0'; )
{
i++;
}
for (a = 0; a < n; i++, a++)
{
dest[i] = src[a];
}
return (dest);
}
