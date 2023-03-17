#include <stdlib.h>
#include "main.h"
#include <stdio.h>


/**
 * int countNumber - a function to count the length
 * @v: the character to be checked.
 *
 * Return: the length of string.
 */

int countNumber(char *v)
{
	int x = 0;

	while (v[x] != '\0')
		x++;
	return (x);
}

/**
 * check - function to check the number or not
 * @c: the character to be checked.
 *
 * Return: the result.
 */

int check(char *c)
{
	int a = 0;

	while (c[a] != '\0')
	{
		if (c[a] < '0' || c[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * error - a function to check errors.
 * @void: nothing.
 *
 * Return: nothing.
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - a program that multiplies two positive numbers.
 * @argc: the number of args
 * @argv: the array.
 *
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	int l, l1, l2, di1, di2, carr, i, *res, val = 0;
	char *res1, *res2;

	res1 = argv[1], res2 = argv[2];
	if (argc != 3 || !check(res1) || !check(res2))
		error();
	l1 = countNumber(res1);
	l2 = countNumber(res2);
	l = l1 + l2 + 1;
	res = malloc(l * sizeof(int));
	if (!res)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		res[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		di1 = res1[l1] - '0';
		carr = 0;
		for (l2 = countNumber(res2) - 1; l2 >= 0; l2--)
		{
			di2 = res2[l2] - '0';
			carr += res[l1 + l2 + 1] + (di1 * di2);
			res[l1 + l2 + 1] = carr % 10;
			carr /= 10;
		}
		if (carr > 0)
			res[l1 + l2 + 1] += carr;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (res[i])
			val = 1;
		if (val)
			_putchar(res[i] + '0');
	}
	if (!val)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
