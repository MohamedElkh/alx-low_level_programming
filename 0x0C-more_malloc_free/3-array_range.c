#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: the character to be checked
 * @max: the character to be checked
 *
 * Description: a function that creates an array of integers.
 * Return: the result
 */

int *array_range(int min, int max)
{
	int x = 0;
	int *val;

	if (min > max)
	{
		return (NULL);
	}

	val = malloc(((max - min) * sizeof(int)) + sizeof(int));

	if (val == NULL)
	{
		return (NULL);
	}
	else
	{
		while (min <= max)
		{
			val[x] = min;
			x++;
			min++;
		}
	}
	return (val);




}
