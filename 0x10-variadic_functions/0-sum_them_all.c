#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its par
 * @n: the number of arguments
 *
 * Return: 0 or the result.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x = 0;
	int val = 0;
	va_list num;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(num, n);
		if (x < n)
		{
			for (x = 0; x < n; x++)
			{
				val += va_arg(num, int);
			}
		}
		va_end(num);

	}
	return (val);
}
