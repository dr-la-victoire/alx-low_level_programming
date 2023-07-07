#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @key: the key, which must not be empty
 * @value: the value, which must be duplicated
 * @ht: the hash table
 *
 * Return: 1 (success) or 0 (failure)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *newNode;

	if (*key == '\0')
		return (0);

	/* computing the index */
	index = key_index((const unsigned char *)key, ht->size);

	/* looping to find the index to add the element */
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	newNode = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key); /* in case of collusion */
	newNode->value = strdup(value);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
