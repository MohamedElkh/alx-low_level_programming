#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers with new line
 * @separator - string
 * @n: the number of integers
 *
 * Return: the result.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list val;

	if (n > 0)
	{
		va_start(val, n);
		for (x = 0; x < n; x++)
		{
			printf("%d", va_arg(val, int));

			if (x != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(val);
	}
	printf("\n");
}
