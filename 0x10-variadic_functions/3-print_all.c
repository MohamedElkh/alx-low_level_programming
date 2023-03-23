#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * p_char - function to print string
 * @value: string
 * @vals: list of arguments
 *
 * Return: nothing.
 */

void p_char(char *value, va_list vals)
{
	printf("%s%c", value, va_arg(vals, int));
}

/**
 * p_integer - function print integer
 * @value: string
 * @vals: list of arguments
 *
 * Return: nothing.
 */

void p_integer(char *value, va_list vals)
{
	printf("%s%i", value, va_arg(vals, int));
}

/**
 * p_float - function to print float
 * @value: string
 * @vals: list of arguments
 *
 * Return: nothing
 */

void p_float(char *value, va_list vals)
{
	printf("%s%f", value, va_arg(vals, double));
}

/**
 * p_ptr - function to print pointer
 * @value: string
 * @vals: list of arguments
 *
 * Return: nothing.
 */

void p_ptr(char *value, va_list vals)
{
	char *val = va_arg(vals, char *);

	if (val == NULL)
	{
		printf("%s%s", value, "(nil)");
		return;
	}
	printf("%s%s", value, val);
}

/**
 * print_all - a function that prints anything.
 * @format: all the arguments.
 *
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	va_list vals;
	unsigned int x = 0;
	unsigned int a = 0;
	char *value = "";
	p_f p_format[] = {
		{"c", p_char},
		{"i", p_integer},
		{"f", p_float},
		{"s", p_ptr},
		{NULL, NULL}
	};

	va_start(vals, format);

	while (format != NULL && format[x])
	{
		a = 0;

		while (a < 4)
		{
			if (format[x] == *p_format[a].st)
			{
				p_format[a].f(value, vals);
				value = ", ";
			}
			a++;
		}
		x++;
	}
	va_end(vals);
		printf("\n");

}


