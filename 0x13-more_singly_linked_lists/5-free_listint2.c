#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets
 * head to NULL
 * @head: pointer to a list
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;

	if (*head == NULL)
		return;
	while (current_node)
	{
		if (current_node->next == NULL)
		{
			free(current_node);
			*head = NULL;
			return;
		}
		else
		{
			current_node = (*head)->next;
			free(*head);
			*head = current_node;
		}
	}
}
