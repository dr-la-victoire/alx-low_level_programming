#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: the source string
 * @n: the number of bytes to be copied
 *
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int i;

	while (*src != '\0' && n--)
	{
		*dest = *src;
		src++;
	}

	for (i = 0; i < n; i++)
		dest[i] = '\0';

	return (start);
}
