#include "main.h"

/**
 * _pow_recursion -  a function that returns the value of x.
 * @x: the character to be stored.
 * @y: the character to be checked.
 *
 * Description:  a function that returns the value of x,
 * raised to the power of y.
 * Return: 0 Always.
 */

int _pow_recursion(int x, int y)
{
	int val = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		val *= _pow_recursion(x, y - 1);
	}
	return (val);

}
