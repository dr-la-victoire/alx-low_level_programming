#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of memory to allocate
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *mp;

	mp = malloc(b);

	if (mp == NULL)
		exit(98);

	return (mp);
}
