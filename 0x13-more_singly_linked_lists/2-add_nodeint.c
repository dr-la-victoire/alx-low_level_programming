#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first element
 * @n: the data to be added
 *
 * Return: the address of the new element or NULL (Failure)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptrNode;

	ptrNode = (listint_t *)malloc(sizeof(listint_t));
	if (ptrNode == NULL)
		return (NULL);
	ptrNode->n = n;
	ptrNode->next = *head;
	*head = ptrNode;

	return (ptrNode);
}
