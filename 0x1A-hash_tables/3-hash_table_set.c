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
	hash_node_t *head = NULL;
	int FAILED = 0, SUCCESS = 1;

	if (!head)
		return (FAILED);
	index = key_index((const unsigned char *)key, ht->size);
	head = malloc(1 * sizeof(hash_node_t));
	if (!head)
		return (FAILED);
	if (!key || *key == '\0')
		return (FAILED);
	head->key = strdup(key);
	head->value = strdup(value);
	head->next = ht->array[index];
	ht->array[index] = head;
	return (SUCCESS);
}
