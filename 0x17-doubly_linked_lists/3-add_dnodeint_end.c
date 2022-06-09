#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a
 * dlistint_t list.
 * @head: pointer to a pointer of a doubly linked list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = *head;

	new_node = malloc(1 * sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	if (!(*head))
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}

	while (current->next)
		current = current->next;
	new_node->prev = current;
	new_node->next = NULL;
	new_node->n = n;
	current->next = new_node;
	return (new_node);
}
