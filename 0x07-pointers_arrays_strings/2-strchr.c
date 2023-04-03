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
	char *ptrc = &c;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			c = s[i];
	}

	return (ptrc);

}
