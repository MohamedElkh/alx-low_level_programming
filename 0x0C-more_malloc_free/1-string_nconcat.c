#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the pointer to be checked.
 * @s2: the second pointer to be checked.
 * @n: the character to be check.
 *
 * Description: a function that concatenates two strings.
 * Return: the result.
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, a = 0, j = 0, z = 0;
	char *val;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;

	while (s2[a] != '\0')
		a++;

	if (n >= a)
		j = x + a;
	else
		j = x + n;

	val = malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (NULL);

	a = 0;
	while (z < x)
	{
		if (z <= x)
			str[z] = s1[z];

		if (z >= x)
		{
			val[z] = s2[a];
			a++;
		}
		z++;
	}
	val[z] = '\0';
	return (val);
}
