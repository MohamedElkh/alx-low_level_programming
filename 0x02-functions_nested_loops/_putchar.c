#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - write the character s
 * @s: char s.
 *
 * Description: print the character s .
 * Return: 1 Always.
 */

int _putchar(char s)
{
	return (write(1,&s,1));
}
