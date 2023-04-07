#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the string we'll add to
 * @src: the string wew're adding
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	dest = '\0';

	return (s);
}
