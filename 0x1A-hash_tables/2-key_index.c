#include "hash_tables.h"
/**
 * key_index - generates an index of the key
 * @key: pointer to key string
 * @size: size of the hash table array
 *
 * Return: the index at which key/value pair should be stored
 * in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = 0;
	unsigned long int index = 0;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
