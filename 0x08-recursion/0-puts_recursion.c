#include "main.h"

/**
 * _puts_recursion - a function that prints a string & new line.
 * @s: the pointer to be checked.
 *
 * Description: a function that prints a string,
 * followed by a new line.
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}

}
