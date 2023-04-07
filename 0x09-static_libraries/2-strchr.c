#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: the string
 * @c: the char to be located
 *
 * Return: pointer to c or NULL
 */

char *_strchr(char *s, char c)
{
	int n;

	while (1)
	{
		n = *s++;

		if (n == c)
			return (s - 1);
		else if (n == 0)
			return (NULL);
	}
}
