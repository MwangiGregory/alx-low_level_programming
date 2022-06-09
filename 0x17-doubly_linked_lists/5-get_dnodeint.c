#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * of a dlistint_t linked list
 * @head: pointer to a doubly linked list
 * @index: position of a node
 * Return: the node at specified index, NULL if node
 * does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current_node = head;

	if (!head)
		return (NULL);

	while (current_node)
	{
		if (i == index)
			return (current_node);
		current_node = current_node->next;
		i++;
	}
	return (NULL);
}
