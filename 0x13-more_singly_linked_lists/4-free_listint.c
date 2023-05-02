#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: a pointer to the first node
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptrHead;

	while (head != NULL)
	{
		ptrHead = head->next;
		free(head->n);
		free(head);
		head = ptrHead;
	}
}
