#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to a hash table
 * @key: key that identifies a value
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL, *current_node = NULL;
	int FAILED = 0, SUCCESS = 1;

	if (!ht)
		return (FAILED);
	if (!key || *key == '\0')
		return (FAILED);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(1 * sizeof(hash_node_t));
	if (!new_node)
		return (FAILED);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	current_node = ht->array[index];
	if (!current_node)
	{
		ht->array[index] = new_node;
		return (SUCCESS);
	}
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (SUCCESS);
		}
		current_node = current_node->next;
	}
	current_node = ht->array[index];
	new_node->next = current_node;
	ht->array[index] = new_node;
	return (SUCCESS);
}
