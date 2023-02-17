#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * @void: nothing .
 *
 * Description: prints the alphabet in lowercase, followed by a new line,
 * except q and e .
 * Retrun: 0 Always .
 */

int main(void)
{
	char a;

	a = 'a';
	while(a <= 'z')
	{
		if(a == 'q' && a == 'e')
			continue;
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
