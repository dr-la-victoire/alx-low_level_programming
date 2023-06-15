#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the pointer to the first node
 * @index: the position of the node to be returned
 *
 * Return: the node at index or NULL if the index does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *node;
	unsigned int i = 0;

	if (head == NULL) /* checking if the list is empty */
		return (NULL);
	temp = head;
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			if (i == index)
			{
				node = temp;
				break;
			}
			else
			{
				temp = temp->next;
				i++;
			}
		}
		if (i > index)
			return (NULL);
	}

	return (node);
}
