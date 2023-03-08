#include "main.h"

/**
 * _find - a function to calculate the square root.
 * @a: the character to be checked.
 * @x: the character to be checked.
 *
 * Description: a function to calculate the square root.
 * Return: 0 Always.
 */

int _find(int a, int x)
{
	int val = x * x;

	if (val > a)
	{
		return (-1);
	}
	else if (val == a)
	{
		return (x);
	}
	return (_find(a, x + 1));
}

/**
 * _sqrt_recursion -  function that returns the natural square root.
 * @n: the character to be checked.
 *
 * Description: function that returns the natural square root
 * of a number.
 * Return: 0 Always.
 */

int _sqrt_recursion(int n)
{
	return (_find(n, 1));
}
