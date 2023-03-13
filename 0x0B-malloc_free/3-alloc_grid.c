#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2
 * @width: the character to be checked.
 * @height: the character to be checked
 *
 * Description: function that returns a pointer to a 2 
 * dimensional array of integers.
 * Return: 0 Always.
 */

int **alloc_grid(int width, int height)
{
	int x, i, a, l;
	int **name;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	name = malloc(height * sizeof(int *));

	if (name == NULL)
	{
		free(name);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		name[x] = malloc(width * sizeof(int));

		if (name[x] == NULL)
		{
			for (i = x; i >= 0; i--)
			{
				free(name[i]);
			}
			free(name);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (l = 0; l < width; l++)
		{
			name[a][l] = 0;
		}
	}
	return (name);
}
