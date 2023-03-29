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

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	dest = '\0';

	return (start);
}
