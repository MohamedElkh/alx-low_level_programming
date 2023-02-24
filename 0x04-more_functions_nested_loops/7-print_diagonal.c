#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line.
 * @n: the character to be checked.
 *
 * Description:a function that draws a diagonal line 
 * on the terminal.
 * Return: nothing.
 */

void print_diagonal(int n)
{

	int a, i;

	if(n <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (i = 1; i <= n; i++)
		{
			for (a = 1; a < i; a++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}	

}
