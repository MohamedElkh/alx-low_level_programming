#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _count - a function to count the length of st
 * @d: the character to be checked.
 *
 * Return: the result.
 */

int _count(char *d)
{
	int i = 0;

	while (*d != '\0')
	{
		d++;
		i++;
	}
	return (i);
}

/**
 * _copy - a function to copy the string
 * @s: the character to be checked.
 * @c: the character to be copied.
 *
 * Return: the result of s
 */

char *_copy(char *s, char *c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		s[x] = c[x];
	}
	s[x++] = '\0';
	return (s);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: the string.
 * @age: the float.
 * @owner: the string.
 *
 * Description: a function that creates a new dog.
 * Return: the result.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}
	if (name == NULL)
	{
		(*d).name = NULL;
	}
	else
	{
		(*d).name = malloc(_count(name) + 1);
		if ((*d).name == NULL)
		{
			free(d);
			return (NULL);
		}
		(*d).name = _copy((*d).name, name);
	}
	if (owner == NULL)
	{
		(*d).owner = NULL;
	}
	else
	{
		(*d).owner = malloc(_count(owner) + 1);
		if ((*d).owner == NULL)
		{
			free((*d).name);
			free(d);
			return (NULL);
		}
		(*d).owner = _copy((*d).owner, owner);
	}
	(*d).age = age;
	return (d);
}
