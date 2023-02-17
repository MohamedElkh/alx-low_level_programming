#include <stdio.h>

/**
 * main - print from 0 to 9 .
 * @void: nothing .
 *
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line .
 * Return: 0 Always .
 */

int main(void)
{
	int i;

	for (i= 0; i < 10 ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
