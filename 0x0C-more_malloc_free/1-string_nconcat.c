#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the pointer to be checked.
 * @s2: the second pointer to be checked.
 * @n: the character to be checked.
 *
 * Description: a function that concatenates two strings.
 * Return: the result.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i1 = 0, i2 = 0, a, z;
	char *val;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i1] != '\0')
		i1++;
	while (s2[i2] != '\0')
		i2++;

	if (n >= i2)
		n = i2;

	val = malloc(sizeof(char) * (i1 + n + 1));

	if (val == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		val[a] = s1[a];
	}
	for (z = i1; z < i1 + n; z++)
		val[z] = s2[z - i1];
	val[z] = '\0';
	return (val);
}
