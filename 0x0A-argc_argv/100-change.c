#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints the minimum number of coins
 * @argc: the argument count.
 * @argv: the argument vector.
 *
 * Description: program that prints the minimum number of coins
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	int cent;
	int coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	while (cent > 0)
	{
		coin++;
		if ((cent - 25) >= 0)
		{
			cent -= 25;
			continue;
		}
		else if ((cent - 10) >= 0)
		{
			cent -= 10;
			continue;
		}
		else if ((cent - 5) >= 0)
		{
			cent -= 5;
			continue;
		}
		else if ((cent - 2) >= 0)
		{
			cent -= 2;
			continue;
		}
		cent--;
	}
	printf("%d\n", coin);
	return (0);
}
