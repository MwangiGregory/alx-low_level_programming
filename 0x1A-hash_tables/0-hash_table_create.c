#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: length of an array
 *
 * Return: A pointer to the newly created hash table,
 * NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t **hn = NULL;
	unsigned int i = 0;

	ht = malloc(1 * sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = NULL;

	hn = malloc(size * sizeof(hash_node_t *));
	if (!hn)
		return (NULL);

	/*Initialize array cells to NULL*/
	for (i = 0; i < size; i++)
		hn[i] = NULL;
	ht->array = hn;

	return (ht);
}
