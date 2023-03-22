#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the pointer to be checked
 * @size: the character to be checked
 * @cmp: the pointer to function
 *
 * Description: a function that searches for an integer.
 * Return: the result.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (x = 0; x < size; x++)
			{
				if (cmp(array[x]))
					return (x);
			}
		}
	}
	return (-1);
}
