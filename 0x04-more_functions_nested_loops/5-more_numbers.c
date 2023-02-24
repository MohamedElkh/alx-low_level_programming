#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14.
 * @void: nothing.
 *
 * Description: function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: nothing .
 */

void more_numbers(void)
{
	int a,i;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
			_putchar((a / 10) + '0');
			}
			 _putchar((a % 10) + '0');
		}
		 _putchar('\n');
	}


}
