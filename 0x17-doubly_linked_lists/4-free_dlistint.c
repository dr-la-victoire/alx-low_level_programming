#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: pointer to the head node
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp; /* temporary ptr for head */

	if (head != NULL)
	{
		while (head->prev != NULL) /*going 2 the start of the list */
			head = head->prev;
		while ((temp = head) != NULL) /* temp has now become hd */
		{
			head = head->next; /* going down the list */
			free(temp); /* freeing each node of the list as we go*/
		}
	}
}
