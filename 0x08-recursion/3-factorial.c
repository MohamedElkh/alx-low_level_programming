#include "main.h"

/**
 * factorial - a function that returns the factorial.
 * @n: the character to be checked.
 *
 * Description: a function that returns the factorial
 * of a given number.
 * Return: 0 Always.
 */

int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		i = 1;
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
