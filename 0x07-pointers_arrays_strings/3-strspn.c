#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the substring
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int count = 0;

	while (*s != '\0' && *accept != '\0')
	{
		if (s[i] == accept[i])
			count++;
	}

	return (count);
}
