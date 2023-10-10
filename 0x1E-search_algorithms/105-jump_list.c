#include "search_algos.h"

/**
 * jump_list - func to search for the value
 * @list: the input list
 * @size: the size of the array
 * @value: the value to search in it
 * Return: the result index of number
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t stepx, step_sz;
	listint_t *nd, *jp;

	if (list == NULL || size == 0)
	{
		return (NULL);
	}

	stepx = 0;
	step_sz = sqrt(size);

	for (nd = jp = list; jp->index + 1 < size && jp->n < value;)
	{
		nd = jp;

		for (stepx += step_sz; jp->index < stepx; jp = jp->next)
		{
			if (jp->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jp->index, jp->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", nd->index, jp->index);

	for (; nd->index < jp->index && nd->n < value; nd = nd->next)
		printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);
	printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);

	return (nd->n == value ? nd : NULL);
}
