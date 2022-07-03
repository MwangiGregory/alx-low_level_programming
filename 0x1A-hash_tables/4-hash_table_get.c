#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table to be looked into
 * @key: pointer to the key to be looked for in the table
 *
 * Return: The value associated with the element, or NULL
 * if the key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current_node = NULL;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}
	return (NULL);
}
