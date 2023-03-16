#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat -  a function that concatenates two strings.
  * @s1: pointer to be checked
  * @s2: pointer to be checked
  * @n: character to be checked
  *
  * Description: a function that concatenates two strings.
  * Return: the result
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, p = 0, a = 0, y = 0;
	char *val;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;

	while (s2[a])
		a++;

	if (n >= a)
		y = x + a;
	else
		y = x + n;

	val = malloc(sizeof(char) * y + 1);
	if (val == NULL)
	{
		return (NULL);
	}
	else
	{
	a = 0;
	while (p < y)
	{
		if (p <= x)
			val[p] = s1[p];

		if (p >= x)
		{
			val[p] = s2[a];
			a++;
		}
		p++;
	}
	}
	val[p] = '\0';
	return (val);
}
