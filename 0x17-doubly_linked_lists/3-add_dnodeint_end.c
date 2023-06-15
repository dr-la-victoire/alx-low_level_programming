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
	dlistint_t *newNode; /* ptr for the newnode */
	dlistint_t *temp; /* temp ptr for the head ptr */

	/* allocating memory for the new node */
	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n; /* assigning the data */
	newNode->next = NULL; /* because it's at the end */
	temp = *head;
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode; /* the next of the prev points to new */
	}
	else
	{
		*head = newNode; /* cos the list is empty */
	}
	newNode->prev = temp; /* prev of the new points to the former */

	return (newNode);
}
