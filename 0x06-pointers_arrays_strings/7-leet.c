#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string into 1337.
 * @e: pointer to be checked.
 *
 * Description: a function that encodes a string into 1337.
 * Return: the result of e.
 */

char *leet(char *e)
{
	int i, a;
	char q1[] = "aAeEoOtTlL";
	char q2[] = "4433007711";

	for (i = 0; e[i] != '\0'; i++)
	{
		for (a = 0; a < 10; a++)
		{
			if (e[i] == q1[a])
			{
				e[i] = q2[a];
			}
		}
	}
	return (e);
}
