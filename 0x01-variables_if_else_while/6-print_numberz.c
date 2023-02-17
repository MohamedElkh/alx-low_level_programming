#include <stdio.h>

/**
 * main - prints the numbers from 0 to 9 
 * @void: nothing .
 *
 * Description: prints the numbers from 0 to 9 by putchar
 * Return: 0 Always .
 */

int main(void)
{
	int i;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}
	putchar('\n');
	return (0);

}
