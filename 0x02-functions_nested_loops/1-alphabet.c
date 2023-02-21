#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, in lowercase.
 * @void: nothing.
 *
 * Description:function that prints the alphabet, in lowercase,
 * followed by a new line.
 * Return: nothing.
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');


}
