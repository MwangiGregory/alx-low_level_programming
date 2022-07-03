#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node = NULL;
	unsigned long int i = 0;
	char *key = NULL, *value = NULL;
	int count = 0;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			key = current_node->key;
			value = current_node->value;
			if (count == 0 && current_node == ht->array[i])
			{
				printf("'%s': '%s'", key, value);
				count++;
			}
			else
				printf(", '%s': '%s'", key, value);
			current_node = current_node->next;
		}
		i++;
	}
	printf("}\n");
}
