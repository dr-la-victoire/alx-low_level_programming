#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: a pointer to the first node
 *
 * Return: the number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	/* declaring a variable to store the len */
	size_t len = 0;

	/* looping through the list */
	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
