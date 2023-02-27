#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: the pointer to be checked.
 *
 * Description: a function that reverses a string.
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i, ind;
	char res;

	i = 0;
	ind = 0;

	while (s[ind++])
	{
		i++;
	}

	for (ind = i - 1; ind >= i / 2; ind--)
	{
		res = s[ind];
		s[ind] = s[i - ind - 1];
		s[i - ind -1] = res;
	}
}
