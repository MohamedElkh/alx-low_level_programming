#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: the character to be checked
 * @height: the character to be checked
 *
 * Return: 0 Always.
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
