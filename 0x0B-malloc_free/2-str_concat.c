#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: the character to be checked.
 * @s2: the character to be checked.
 *
 * Description: a function that concatenates two strings.
 * Return: null on failure.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, a = 0, x = 0, z = 0;
	char *name;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	else
	{
	while (s1[i] != '\0')
		i++;
	while (s2[a] != '\0')
		a++;
	}
	x = i + a;
	name = malloc((x * sizeof(char)) + 1);

	if (name == NULL)
		return (NULL);
	a = 0;

while (z < x)
{
if (z <= i)
{
name[z] = s1[z];
}
if (z >= i)
{
name[z] = s2[a];
a++;
}
z++;
}
name[z] = '\0';
return (name);

}

