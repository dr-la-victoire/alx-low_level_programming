#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: the pointer to the first node
 * @n: the data to be added
 *
 * Return: the address of the new element or NULL (Failure)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newPtr;
	listint_t *tempPtr;

	tempPtr = *head;
	newPtr = (listint_t *)malloc(sizeof(listint_t));

	if (newPtr == NULL)
		return (NULL);
	newPtr->n = n;
	newPtr->next = NULL;

	if (*head == NULL)
	{
		*head = newPtr;
		return (newPtr);
	}

	while (tempPtr->next != NULL)
		tempPtr = tempPtr->next;
	tempPtr->next = newPtr;

	return (newPtr);
}
