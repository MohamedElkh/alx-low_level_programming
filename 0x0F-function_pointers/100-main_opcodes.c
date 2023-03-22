#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: the number of arguments
 * @argv: an array
 *
 * Description: prints the opcodes of its own main function.
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	int by, i;
	unsigned char opc;
	int (*name)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	by = atoi(argv[1]);

	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}
	else
	{
	for (i = 0; i < by; i++)
	{
		opc = *(unsigned char *)name;
		printf("%.2x", opc);
		if (i == by - 1)
		{
			continue;
		}
		printf(" ");
		name++;
	}
	}
	printf("\n");
	return (0);

}
