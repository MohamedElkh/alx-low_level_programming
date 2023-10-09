#include "search_algos.h"

/**
 * do_search - func to search for the value
 * @arr: the input
 * @size: the size of the array
 * @val: the value to search
 * Return: the result.
 */

int do_search(int *arr, size_t size, int val)
{
	size_t x;
	size_t hlf = size / 2;

	if (arr == NULL || size == 0)
	{
		return (-1);
	}
	printf("Searching in array");

	for (x = 0; x < size; x++)
	{
		printf("%s %d", (x == 0) ? ":" : ",", arr[x]);
	}
	printf("\n");

	if (hlf && size % 2 == 0)
		hlf--;
	if (val == arr[hlf])
	{
		if (hlf > 0)
		{
			return (do_search(arr, hlf + 1, val));
		}
		return ((int)hlf);
	}
	if (val < arr[hlf])
	{
		return (do_search(arr, hlf + 1, val));
	}
	hlf++;

	return (do_search(arr + hlf, size - hlf, val) + hlf);
}

/**
 * advanced_binary - func to calls to research and return
 * @array: the input
 * @size: the size of the array
 * @value: the value to search in it
 * Return: the index of the number
 */

int advanced_binary(int *array, size_t size, int value)
{
	int x;

	x = do_search(array, size, value);

	if (x >= 0 && array[x] != value)
	{
		return (-1);
	}
	return (x);
}
