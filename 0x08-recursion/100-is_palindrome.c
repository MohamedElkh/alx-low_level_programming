#include "main.h"

/**
 * _recuLen - count the length of the string.
 * @y: the character to be checked.
 *
 * Description: a function to count the length
 * of the string.
 * Return: 0 Always.
 */

int _recuLen(char *y)
{
	if (*y == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _recuLen(y + 1));
	}
}

/**
 * _com - a function to compares between the strings.
 * @a: a character to be checked.
 * @q: the character to be checked.
 * @z: the character to be checked.
 *
 * Description: comparing between the strings.
 * Return: 0 Always.
 */

int _com(char *a, int q, int z)
{
	if (*(a + q) == *(a + z))
	{
		if (q == z || q == z + 1)
		{
			return (1);
		}
		return (0 + _com(a, q + 1, z - 1));
	}
	return (0);
}

/**
 * is_palindrome - a function that returns 1.
 * @s: the pointer to be checked.
 *
 * Description: a function that returns 1
 * if a string is a palindrome and 0.
 * Return: 0 Always.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (_com(s, 0, _recuLen(s) - 1));
}
