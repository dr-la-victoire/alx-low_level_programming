#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: the pointer to the first node
 *
 * Return: the data of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int value;

	if (head == NULL || *head == NULL)
		return (0);

	ptr = (listint_t *)malloc(sizeof(listint_t));
	ptr = *head;
	value = ptr->n;
	*head = (*head)->next;
	free(ptr);

	return (head);
}
