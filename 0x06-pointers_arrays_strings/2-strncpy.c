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
	int i = 0;
	char *start = dest;

	while (src[i] != '\0' && n--)
	{
		dest[i] = src[i];
		dest[i]++;
		src[i]++;
	}

	dest[i] = '\0';

	return (start);
}
