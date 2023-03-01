#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: the first pointer to be checked.
 * @s2: the second pointer to be checked.
 *
 * Description: Write a function that compares two strings.
 * Return: the result of the comparing.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s2++;
		s1++;
	}
	return (*s1 - *s2);
}
