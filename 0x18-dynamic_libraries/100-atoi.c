#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: the pointer to be checked.
 *
 * Description: a function that convert a string to an integer.
 * Return: number .
 */

int _atoi(char *s)
{
	int i = 0;
	int mult = 1;
	int a = 0;
	unsigned int yes = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			mult *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			a = 1;
			yes = (yes * 10) + (s[i] - '0');
			i++;
		}
		if (a == 1)
		{
			break;
		}
		i++;
	}
	yes *= mult;
	return (yes);
}
