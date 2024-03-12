#include "search_algos.h"

/**
 * jump_search - implements the jump search algorithm
 * @array: ptr to the array
 * @size: the size of the array
 * @value: the value to be searched for
 *
 * Return: the index if found or -1 if empty or not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, low, i;

	if (array == NULL)
		return (-1);

	low = 0;
	jump = sqrt(size);

	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			low = i;
		else
			break;
	}

	for (i = low; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
