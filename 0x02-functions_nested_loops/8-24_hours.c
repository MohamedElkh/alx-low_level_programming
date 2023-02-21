#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 * @void: nothing.
 *
 * Description: a function that prints every minute of the day of 
 * Jack Bauer,starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int i,j,e,r;

	for (i = 0; i <= 2; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	if((i <= 1 && j <= 9) || (i <= 2 && j <= 3))
	{
	for (e = 0; e <= 5; e++)
	{
	for (r = 0 ; r <= 9; r++)
	{
	_putchar(i + '0');
	_putchar(j  + '0');
	_putchar(58);
	_putchar(e + '0');
	_putchar(r  + '0');
	_putchar('\n');
	}
	}
	}
	}
}


}
