#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the first node
 * @n: the data to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp; /* temp ptr for head */
	dlistint_t *newNode; /* ptr for the new node to be added */

	/* allocating data dynamically */
	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n; /* assigning the data for the new node */
	newNode->prev = NULL;
	temp = *head;
	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
		temp->prev = newNode;
		newNode->next = temp;
	}
	*head = newNode;

	return (newNode);
}
