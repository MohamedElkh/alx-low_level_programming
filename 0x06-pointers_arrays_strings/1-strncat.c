#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: the first pointer to be checked.
 * @src: the second pointer to be checked.
 * @n: the character to be checked.
 *
 * Description: a function that concatenates two strings.
 * Return: dest.
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
