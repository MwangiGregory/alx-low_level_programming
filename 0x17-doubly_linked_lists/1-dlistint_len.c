#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements
 * in a linked dlistint_t list.
 * @h: pointer to a doubly linked list
 * Return: the number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *hd = h;
	size_t n = 0;

	while (hd)
	{
		n++;
		hd = hd->next;
	}
	return (n);
}
