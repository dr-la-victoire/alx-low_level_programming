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

	while (*src != '\0' && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	while (*dest != '\0')
		dest++;

	*dest = '\0';

	return (s);
}

