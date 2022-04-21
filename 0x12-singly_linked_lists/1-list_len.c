#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - finds number of elements in a linked list
 * @h: pointer to a linked list
 * Return: Always the number of elements in the
 * linked list
 */
size_t list_len(const list_t *h)
{
	size_t no_of_elements = 0;

	while (h)
	{
		no_of_elements++;
		h = h->next;
	}
	return (no_of_elements);
}
