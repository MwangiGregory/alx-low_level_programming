#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to a list_t list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head->next)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head->str);
	free(head);
	head = NULL;
}
