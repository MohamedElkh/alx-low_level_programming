#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 * @void: nothing .
 *
 * Description: prints all the numbers of base 16 in lowercase.
 * followed by a new line.
 * Return: 0 Always.
 */

int main(void)
{
	int n;
	char a;

	n = 0;
	a = 'a';
	while (n <= 9)
	{
		putchar( (n % 10 ) + '0');
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
