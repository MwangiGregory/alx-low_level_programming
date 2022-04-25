#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to a list
 */
void free_listint(listint_t *head)
{
	listint_t *current_node = head;

	if (head == NULL)
		return;
	while (current_node)
	{
		if (current_node->next == NULL)
		{
			free(current_node);
			return;
		}
		else
		{
			current_node = head->next;
			free(head);
			head = current_node;
		}
	}
}
