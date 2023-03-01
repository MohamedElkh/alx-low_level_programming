#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: the pointer to be checked.
 *
 * Description: a function that capitalizes all words of a string.
 * Return: the result of s.
 */

char *cap_string(char *s)
{
	int i, x;
	char sign [] = {32, 9, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if ((s[0] >= 97) && (s[0] <= 122))
	{
		s[0] -= 32;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
	for (x = 0; sign[x] != '\0'; x++)
	{
	if (s[i] == sign[x])
	{
	if ((s[i + 1] >= 97) && (s[i + 1] <= 122))
	{
	s[i + 1] = s[i + 1] - 32;
	}
        }
	}
	}
	return (s);
}
