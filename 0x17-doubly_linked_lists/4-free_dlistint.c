#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: pointer to the head node
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head->n);
	}
}
