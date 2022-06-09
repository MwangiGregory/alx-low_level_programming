#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint -  a function that frees a dlistint_t list
 * @head: pointer to a doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = NULL;

	while (head)
	{
		current_node = head->next;
		if (!head->next)
		{
			free(head);
			head = NULL;
			return;
		}
		free(head);
		head = current_node;
	}
}
