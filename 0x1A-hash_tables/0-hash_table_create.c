#include "hash_tables.h"

/**
 * hash_tables_create - creates a harsh table
 * @size size of the array
 *
 * Return: pointer pointig to the newly created harsh table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	if (size < 1)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	return (NULL);

	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;

	return (ht);
}
