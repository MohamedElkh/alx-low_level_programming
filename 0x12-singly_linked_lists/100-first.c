#include <stdio.h>

void printstr(void) __attribute__ ((constructor));

/**
 * printstr - function
 *
 * Return: nothing.
 */
void printstr(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

