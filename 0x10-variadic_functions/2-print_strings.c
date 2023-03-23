#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings.
 * @separator: string.
 * @n: the number of strings.
 *
 * Return: the result.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *names;
	va_list val;

	if (n > 0)
	{
		va_start(val, n);
		for (x = 0; x < n; x++)
		{
			names = va_arg(val, char *);
			if (names == NULL)
			{
				printf("%s", "(nil)");
			}
			else
			{
				printf("%s", names);
			}
			if (x != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(val);
	}
	printf("\n");
}
