#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int count (char *r);
int count_len(char *ptr);
char **strtow(char *str);

/**
 * count - count the length of string.
 * @r: the pointer to be checked.
 *
 * Return: the length of string
 */

int count (char *r)
{
	int i = 0, l = 0;

	while (*(r + i) && *(r + i) != ' ')
	{
		l++;
		i++;
	}
	return (l);
}

/**
 * count_len - count the words in the string .
 * @s: the character to be check.
 *
 * Return: the length of words
 */

int count_len(char *ptr)
{
	int i = 0, wo = 0, l = 0;

	for (i = 0; *(ptr + i); i++)
		l++;
	for (i = 0; i < l; i++)
	{
		if (*(ptr + i) != ' ')
		{
			wo++;
			i += count(ptr + i);
		}
	}
	return (wo);
}

/**
 * strtow - a function that splits a string into words.
 * @str: the pointer to be checked.
 *
 * Description: a function that splits a string into words.
 * Return: the result or null.
 */

char **strtow(char *str)
{
	int i = 0, wo = 0, w = 0, le = 0, l = 0;
	char **name;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wo = count_len(str);
	if (wo == 0)
		return (NULL);
	name = malloc((wo + 1) * sizeof(char *));
	if (name == NULL)
		return (NULL);
	for (w = 0; w < wo; w++)
	{
		while (str[i] == ' ')
			l++;
		le = count(str + i);
		name[w] = malloc((le + 1) * sizeof(char));

		if (name[w] == NULL)
		{
			for (; w >= 0; w--)
				free(name[w]);

			free(name);
			return (NULL);
		}
		for (l = 0; l < le; l++)
			name[w][l] = str[i++];

		name[w][l] = '\0';
	}
	name[w] = NULL;
	return (name);

}

