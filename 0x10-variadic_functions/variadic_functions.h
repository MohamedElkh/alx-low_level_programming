#ifndef _NAME_
#define _NAME_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void p_char(char *value, va_list vals);
void p_integer(char *value, va_list vals);
void p_float(char *value, va_list vals);
void p_ptr(char *value, va_list vals);

/**
 * struct p_format - struct format
 * @value: the string.
 * @vals: the arguments
 */

typedef struct p_format
{
	char *st;
	void (*f)(char *value, va_list vals);
} p_f;
#endif

