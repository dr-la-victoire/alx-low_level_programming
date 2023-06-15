#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the first node
 * @idx: the index where the node should be inserted
 *
 * Return: the address of the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *newNode;
	unsigned int i;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	temp = *h;

	for (i = 0; i < idx && temp->next != NULL; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next = newNode;
		}
		else
		{
			temp = temp->next;
		}
	}

	return (newNode);

}
