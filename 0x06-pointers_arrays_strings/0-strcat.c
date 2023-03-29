#include "main.h"

/**
 * _strcat - concatenates two strings
 * dest: the string we'll add to
 * src: the string wew're adding
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest += src[i];
	}

	dest[i] = '\0';

	return (dest);
}
