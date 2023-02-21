#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: the character to be checked.
 *
 * Description: function that prints the last digit of a number.
 * Return: 0 Always.
 */

int print_last_digit(int n)
{
	
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');
	return (n);
	
	
}
