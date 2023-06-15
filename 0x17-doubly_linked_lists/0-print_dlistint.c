#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the first node
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0; /* declaring the number of nodes */

	/* traversing the list until the NULL pointer is reached */
	while (h != NULL)
	{
		/* printing the data */
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
