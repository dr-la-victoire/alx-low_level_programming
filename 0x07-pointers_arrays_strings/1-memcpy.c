#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination to be copied to
 * @src: the source to be copied from
 * @n: the number of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *pDest = dest;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
	}

	return (pDest);
}
