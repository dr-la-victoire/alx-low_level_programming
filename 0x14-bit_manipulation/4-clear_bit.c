#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the bit
 * @index: the given index
 *
 * Return: 1 (Success) or -1 (Failure)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	*n |= 0 << index;

	return (1);
}
