#include "search_algos.h"

/**
 * binary_search - implements the binary search algorithm
 * @array: ptr to the array of values
 * @size: the size of the array
 * @value: the value to be found
 *
 * Return: -1 if not found or NULL or the index of the value if found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (array[i] == (int)right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
