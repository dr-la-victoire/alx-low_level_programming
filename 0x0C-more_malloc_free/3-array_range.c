#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: the min value
 * @max: the max
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		array[i] = i;

	return (array);
}
