#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024.
 * @void: nothing .
 *
 * Description: prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 Always .
 */

int main(void)
{
	int a, i;

	i = 0;
	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			i += a;
		}
		a++;
	}
	printf("%d\n", i);
	return (0);
}
