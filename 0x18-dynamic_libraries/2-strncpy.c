#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes
 *
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *s = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (*dest != '\0')
		dest++;

	*dest = '\0';

	return (s);
}

