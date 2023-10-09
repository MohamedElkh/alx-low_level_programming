#include "search_algos.h"

/**
 * do_bi_search - func to search for the value
 * @arr: the pointer to first elem
 * @lf: start from the left
 * @right: start from the right
 * @val: the value to search in it
 * Return: the result
 */

int do_bi_search(int *arr, size_t lf, size_t right, int val)
{
	size_t x;

	if (arr == NULL)
	{
		return (-1);
	}

	while (right >= lf)
	{
		printf("Searching in array: ");

		for (x = lf; x < right; x++)
		{
			printf("%d, ", arr[x]);
		}
		printf("%d\n", arr[x]);

		x = lf + (right - lf) / 2;

		if (arr[x] == val)
			return (x);
		if (arr[x] > val)
			right = x - 1;
		else
			lf = x + 1;
	}
	return (-1);
}

/**
 * exponential_search - func to search for the value
 * @array: the poiner to the first elem
 * @size: the number of elem
 * @value: the value to search for it
 * Return: the result
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0, rt;

	if (array == NULL)
	{
		return (-1);
	}
	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
		{
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		}
	}

	rt = x < size ? x : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, rt);

	return (do_bi_search(array, x / 2, rt, value))
}
