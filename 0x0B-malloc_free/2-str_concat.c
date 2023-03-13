#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count - a function to return the length of string.
 * @y: the character to be checked.
 *
 * Return: the length of string.
 */

int count(char *y)
{
        int i = 0;

        if (!*y == 0)
        {
                return (0);
        }

        while (*y != '\0')
        {
                i++;
                y++;
        }
        return (i);
}

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
	int i, a, val = 0;
	char *name;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	val += count(s1) + count(s2);
	name = malloc((val * sizeof(char)) +1);

	if (name == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		name[i] = s1[i];
	}
	for (a = 0; s2[a] != '\0'; i++, a++)
	{
		name[i] = s2[a];
	}
	name[i] = '\0';
	return (name);
}

