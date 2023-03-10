#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name.
 * @argc: the character that stored the numbers
 * @argv: the pointer that store the value of arge
 *
 * Description: the program that prints its name.
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
