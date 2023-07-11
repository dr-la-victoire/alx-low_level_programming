#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 (Success) or 0 (Failure)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *newNode;

	index = key_index((const unsigned char *)key, ht->size); /* getting index */
	for (i = index; ht->array[i]; i++) /* going to the point to place the data */
	{
		if (strcmp(ht->array[i]->key, key) == 0) /* checking for similarities */
		{
			ht->array[i]->value = strdup(value); /* setting the value */
			return (1);
		}
	}

	newNode = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
