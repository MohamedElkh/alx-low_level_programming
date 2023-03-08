#include "main.h"

/**
 * check - a function if number is prime .
 * @a: the character to be checked.
 * @q: the character to be countt.
 *
 * Description: a function the check if the number
 * is prime.
 * Return: 0 Always.
 */

int check(int a, int q)
{
	if (a <= 1)
	{
		return (0);
	}
	else if (a % q == 0 && q > 1)
	{
		return (0);
	}
	else if ((a / q) < q)
	{
		return (1);
	}
	return (check(a, q + 1));
}

/**
 * is_prime_number - a function that returns 1 if the input integer.
 * @n: the character to be checked.
 *
 * Description: a function that returns 1 if the input integer.
 * Return: 0 Always.
 */

int is_prime_number(int n)
{
	return (check(n, 1));
}
