#include <stdio.h>
#include <math.h>

/**
 * main - program that finds and prints the largest number
 * @void: nothing
 *
 * Description: program that finds and prints
 * the largest prime factor of the number
 * Return: 0 Always.
 */

int main(void)
{
	long i, max;
	long num = 612852475143;
	double sq = sqrt(num);

	for (i = 1; i <= sq; i++)
	{
		if (num % i == 0)
		{
			max = num / i;
		}
	}
	printf("%ld\n", max);
	return (0);
}
