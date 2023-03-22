#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int (*d)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	d = get_op_func(argv[2]);

	if (!d)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", d(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
