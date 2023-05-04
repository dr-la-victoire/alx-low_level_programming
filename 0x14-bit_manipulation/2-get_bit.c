#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the bit
 * @index: the given index
 *
 * Return: the value of the bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	value = (n >> index) & 1;

	return (value);
}
