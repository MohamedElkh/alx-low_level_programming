#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function returns the sum of a, b.
 * @a: the character to be checked
 * @b: the character to be checked
 *
 * Return: the result.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function returns the minus of a, b.
 * @a: the character to be checked
 * @b: the character to be checked
 *
 * Return: the result.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function return the multiples of a, b
 * @a: the character to be checked
 * @b: the character to be checked
 *
 * Return: the result.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function divided a by b
 * @a: the character to be checked
 * @b: the character to be checked
 *
 * Return: the result.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function moduls a % b
 * @a: the character to be checked
 * @b: the character to be checked
 *
 * Return: the result.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}



