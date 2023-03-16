#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first pointer to be checked
 * @s2: the second pointer to be checked
 * n: the character to be checked
 *
 * Description: a function that concatenates two strings.
 * Return: result Always.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, a = 0, x = 0, j = 0;
	char *val;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[a])
		a++;

	if (n >= a)
		x = i + a;
	else
		x = i + n;

	val = malloc(sizeof(char) * x + 1);

	a = 0;

	if (val == NULL)
	{
		return (NULL);
	}
	else
	{
		while (j < x)
		{
			if (j <= i)
				val[j] = s1[j];
			if (j >= i)
			{
				val[j] = s2[a];
				a++;
			}
			j++;
		}
		val[j] = '\0';
	}
	return (val);
}

