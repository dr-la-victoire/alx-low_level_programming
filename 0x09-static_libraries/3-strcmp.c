#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the difference between the first letters
 */

int _strcmp(char *s1, char *s2)
{
	int value;

	if (*s1 > *s2)
		value = *s1 - *s2;
	else if (*s1 < *s2)
		value = *s1 - *s2;
	else
		value = 0;

	return (value);
}
