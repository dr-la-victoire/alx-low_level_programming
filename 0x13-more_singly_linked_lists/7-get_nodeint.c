#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: popinter to the first node
 * @index: the index
 *
 * Return: the nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	while (head != NULL)
	{
		for (i = 0; i <= index; i++)
		{
			if (i == index)
			{
				return (head->n);
			}

			head = head->next;
		}
	}
}
