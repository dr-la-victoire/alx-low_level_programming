#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: the pointer to the first node
 *
 * Return: the data of the head node
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	temp = *head;
	if (head == NULL)
	{
		return (0);
	}

	data = temp->n;
	*head = temp->next;
	temp->next = NULL;
	free(temp);

	return (data);
}
