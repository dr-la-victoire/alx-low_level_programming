#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of the linked list
 * @head: the pointer to the first node
 * @str: the node to be added
 *
 * Return: NULL (Failure) or the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *newPtr;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	newPtr = (list_t *)malloc(sizeof(list_t));

	if (newPtr == NULL)
		return (NULL);
	newPtr->str = strdup(str);
	if (newPtr->str == NULL)
	{
		free(newPtr);
		return (NULL);
	}
	newPtr->len = len;
	newPtr->next = *head;
	*head = newPtr;

	return (*head);
}
