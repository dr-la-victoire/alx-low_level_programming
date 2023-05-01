#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer to the first node
 * @str: the data to be added
 *
 * Return: NULL (Failure) or the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp;
	unsigned int len = 0;

	while (str[len])
		len++;

	ptr = *head;
	temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;

	return (temp);
}
