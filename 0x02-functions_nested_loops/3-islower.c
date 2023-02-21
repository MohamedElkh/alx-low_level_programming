#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @int c: the character is being checked.
 *
 * Description: Write a function that checks for lowercase character.
 * Return: Returns 1 if c is lowercase & Returns 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 95 && c <= 122)
	{
		return (1);
	}
	return (0);
}
