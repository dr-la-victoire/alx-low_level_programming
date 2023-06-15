#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head
 * @n: the data to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	temp = *head;
	if (temp != NULL)
	{
		while (temp != NULL)
			temp = temp->next;
	}
	newNode->prev = temp;
	temp->next = newNode;

	return (newNode);
}
