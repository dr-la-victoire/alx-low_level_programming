#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: pointer to the hash table or NULL (Failure)
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashptr; /* declaring hash table ptr */

	/* dynamically alocating memory for the hash table ptr */
	hashptr = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (hashptr == NULL)
		return (NULL); /* on failure */
	/* storing the values */
	hashptr->array = (hash_node_t **)malloc(sizeof(hash_node_t *));
	if (hashptr->array == NULL)
		return (NULL);
	hashptr->size = size;

	return (hashptr);
}
