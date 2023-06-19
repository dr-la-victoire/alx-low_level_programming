#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: the char to be filled
 * @n: the number of bytes
 *
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *pS = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (pS);
}
