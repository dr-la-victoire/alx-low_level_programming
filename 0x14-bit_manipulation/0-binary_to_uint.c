#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the string of 0s and 1s to be converted
 *
 * Return: the converted number or 0 (failure)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1; /* equivalent to multiplication */
		/* when changing from bin to dec, you multiply by 2^i */
		if (b[i] == '1')
			num += 1;
	}

	return (num);
}
