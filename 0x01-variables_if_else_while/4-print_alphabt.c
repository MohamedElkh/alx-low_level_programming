#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * @void: nothing .
 *
 * Description: prints the alphabet in lowercase, followed by a new line,
 * except q and e .
 * Return: 0 Always .
 */

int main(void)
{
	char a;


	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' && a == 'e')
	        	continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
