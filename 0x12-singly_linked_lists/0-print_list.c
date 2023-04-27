#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: the pointer to the first node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (1);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);

}
