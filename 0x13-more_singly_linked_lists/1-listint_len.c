#include "lists.h"
#include <stdio.h>

/**
 * listint_len - finds the number of elements in a linked listint_t list
 * @h: pointer to the next node
 * Return: number of elements in h.
 */
size_t listint_len(const listint_t *h)
{
	size_t listint_length = 0;
	const listint_t *current_node = h;

	while (current_node->next)
	{
		listint_length++;
		current_node = current_node->next;
	}
	if (current_node->next == NULL)
		listint_length++;
	return (listint_length);
}
