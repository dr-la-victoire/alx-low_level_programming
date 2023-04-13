#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements in the array
 * @size: the size of each element of the array in bytes
 *
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*unsigned int i;*/
	void *call_oc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	call_oc = malloc(size * nmemb);
	if (call_oc == NULL)
		return (NULL);

	return (call_oc);
}
