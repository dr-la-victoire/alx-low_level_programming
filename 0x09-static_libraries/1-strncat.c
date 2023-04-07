#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes
 *
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (s);
}
