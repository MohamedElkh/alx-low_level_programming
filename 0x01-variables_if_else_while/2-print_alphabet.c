#include <stdio.h>

/**
 * main - prints the characters from a to z .
 * @void: nothing .
 *
 * Description: prints the characters from a to z .
 * Return: 0 Always .
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);

}
