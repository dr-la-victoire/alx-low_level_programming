#include "main.h"

/**
 * create_array -  creates an array of chars, and initialize it
 * with a specific char
 * @size: the array size
 * @c: the char to initialize it with
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pArray;

	if (size == 0)
		return (NULL);
	if (size > 0)
	{
		pArray = (char *) malloc(size * sizeof(char));

		if (pArray == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
			pArray[i] = c;
	}

/*	free(pArray);*/

	return (pArray);
}
