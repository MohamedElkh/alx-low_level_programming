#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * @void: nothing .
 *
 * Description: prints all possible combinations of single-digit numbers.
 * Return: 0 Always.
 */

int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar((n % 10) + '0');
		n++;
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		
		
	}
	putchar('\n');
	return (0);
}
