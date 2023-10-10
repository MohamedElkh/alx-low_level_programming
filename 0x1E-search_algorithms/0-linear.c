#include "search_algos.h"

/**
 * linear_search - func to search for the value in array
 * @array: the input array
 * @size: the size of the array
 * @value: the value to search in it
 * Return: Always EXIT_SUCCES
 */

int linear_search(int *array, size_t size, int value)
{
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < (int)size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);

		if (value == array[x])
		{
			return (x);
		}
	}
	return (-1);
}
