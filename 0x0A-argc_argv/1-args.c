#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number
 * @argc: the argument count.
 * @argv: the argument vector.
 *
 * Description: prints the number of args
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
