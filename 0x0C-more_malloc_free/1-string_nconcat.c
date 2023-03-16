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
	unsigned int x = 0, j = 0, a = 0, l = 0;
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
		l = x + a;
	else
		l = x + n;

	val = malloc(sizeof(char) * l + 1);
	if (val == NULL)
		return (NULL);

	a = 0;
	while (j < l)
	{
		if (j <= x)
			val[j] = s1[j];

		if (j >= x)
		{
			val[j] = s2[a];
			a++;
		}
		j++;
	}
	val[j] = '\0';
	return (val);
}
