#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 * @array: the array
 * @size: is the size of the array
 * @action: pointer to function.
 *
 * Description: a function that executes a function given as a parameter
 * on each element of an array.
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (x = 0; x < size; x++)
			action(array[x]);

	}
}
