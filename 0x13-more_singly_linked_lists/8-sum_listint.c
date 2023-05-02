#include "lists.h"

/**
 * sum_listint - adds all the data in a linked list
 * @head: the pointer to the first node
 *
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
