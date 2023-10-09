#include "search_algos.h"

/**
 * jump_search - func to search for the value
 * @array: the input of the array
 * @size: the size of the array
 * @value: the value to search in it
 * Return: the index of the number
 */

int jump_search(int *array, size_t size, int value)
{
	int ind, pre, mk, km;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	mk = (int)sqrt((double)size);
	km = 0;
	pre = ind = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", ind, array[ind]);

		if (array[ind] == value)
		{
			return (ind);
		}
		km++;
		pre = ind;
		ind = km * mk;

	} while (ind < (int)size && array[ind] < value);

	printf("Value found between indexes [%d] and [%d]\n", pre, ind);

	for (; pre <= ind && pre < (int)size; pre++)
	{
		printf("Value checked array[%d] = [%d]\n", pre, array[pre]);

		if (array[pre] == value)
		{
			return (pre);
		}
	}
	return (-1);
}
