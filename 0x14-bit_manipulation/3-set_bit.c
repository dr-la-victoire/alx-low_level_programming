#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the bit
 * @index: the index
 *
 * Return: 1 (Success) or -1 (Failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	*n |= 1 << index;

	return (1);
}
