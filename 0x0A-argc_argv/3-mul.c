#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: program that multiplies two numbers.
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	int a, val = 1;

	if (argc == 3)
	{
		for (a = 1; a < argc; a++)
		{
			val *= atoi(argv[a]);
		}
		printf("%d\n", val);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
