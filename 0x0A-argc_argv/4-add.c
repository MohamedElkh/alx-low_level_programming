#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - a program that adds positive numbers.
 * @argc: the argument count.
 * @argv: the argument vector.
 *
 * Description: a program that adds positive numbers.
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	int x;
	unsigned int a;
	unsigned int val = 0;
	char *value;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			value = argv[x];
			for (a = 0; a < strlen(value); a++)
			{
				if (value[a] < 48 || value[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			val += atoi(value);
			value++;
		}
		printf("%d\n", val);
	}
	else
	{
		printf("0\n");
	}
	return (0);

}
