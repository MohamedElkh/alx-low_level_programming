#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 * @void: nothing.
 *
 * Description: prints the alphabet in lowercase, and then in uppercase.
 * Return: 0 Always .
 */

int main(void)
{
	char a ;
	char A ;

	a = 'a';
	A = 'A';
	while(a <= 'z')
	{
		putchar(a);
		a++;
	}
	while(A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
