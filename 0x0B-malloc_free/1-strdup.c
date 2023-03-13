#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: the pointer to be duplicated.
 *
 * Description: a function that returns a pointer
 * to a newly allocated space in memory.
 * Return: a duplicated string.
 */

char *_strdup(char *str)
{
	int x, a;
	char *name;

	x = 0;
	a = 1;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[a] != '\0')
		{
			a++;
		}
	}

	name = malloc((a * sizeof(char)) + 1);

	if (name == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < a; x++)
		{
			name[x] = str[x];
		}
		name[x] = '\0';
	}
	return (name);
}
