#include "search_algos.h"

/**
 * linear_search - implements the linear search algorithm
 * @array: the ptr to the array of elements
 * @size: the array size
 * @value: the int value we're searching for
 *
 * Return: -1 on failure and the array index on success
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Checking if array is null */
	if (array == NULL)
		return (-1);
	/* Running a for loop through the array elements */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
