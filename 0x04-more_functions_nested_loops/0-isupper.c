#include "main.h"
#include <stdio.h>

/**
 * _isupper -  a function that checks for uppercase character.
 * @c: the character to be checked .
 *
 * Description:  a function that checks for uppercase character.
 * Return: Returns 1 if c is uppercase or Returns 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 67 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
