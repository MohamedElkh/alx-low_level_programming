#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function to print the value of n .
 * @void: nothing .
 *
 * Description:function to print the value of n is
 * greater than 5 or equal 0 or less than 6.
 * Return: 0 Always .
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	num = n %10;

	if (num > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, num);
	}
	else if (num == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, num);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, num);
	}
	return (0);
}
