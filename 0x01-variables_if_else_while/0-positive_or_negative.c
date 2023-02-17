#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints if variable n greater or equal or less than 0.
 * @void: nothing .
 *
 * Description: prints if variable n greater or equal or less than 0
 * Return: 0 Always .
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);

}
