#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the first node on the list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		free(ptr->str);
		free(ptr->len);
		ptr = ptr->next;
	}
}
