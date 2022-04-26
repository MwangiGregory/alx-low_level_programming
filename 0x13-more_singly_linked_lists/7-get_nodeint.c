#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * linked list
 * @head: pointer to a list
 * @index: posible position of a node in the list
 * Return: The nth node of a listint-t list, returns NULL
 * if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node = NULL;

	if (head == NULL)
		return (NULL);

	current_node = head;
	while (current_node)
	{
		if (i == index)
			return (current_node);

		i++;
		current_node = current_node->next;
	}
	return (NULL);
}
