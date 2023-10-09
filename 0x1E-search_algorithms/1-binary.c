#include "search_algos.h"

/**
 * do_recursive_search - func to search for the value in array
 * @arr: the input array
 * @size: the size of the array
 * @val: the value to search in it
 * Return: the index of the numbers
 */

int do_recursive_search(int *arr, size_t size, int val)
{
	size_t hlf = size / 2;
	size_t x;

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
		return ((int)hlf);
	if (val < arr[hlf])
		return (do_recursive_search(arr, hlf, val));

	hlf++;

	return (do_recursive_search(arr + hlf, size - hlf, val) + hlf);
}

/**
 * binary_search - func to calls to binary search
 * @array: the input array
 * @size: the size of array
 * @value: the value to search in it
 * Return: the index of the numbers
 */

int binary_search(int *array, size_t size, int value)
{
	int x;

	x = do_recursive_search(array, size, value);

	if (x >= 0 && array[x] != value)
	{
		return (-1);
	}
	return (x);
}
