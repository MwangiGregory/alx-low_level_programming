#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_last_node - deletes the last node of a
 * doubly linked list
 * @last_node: pointer to the last node of a doubly
 * linked list
 * Return: always 1
 */
int delete_last_node(dlistint_t *last_node)
{
        int status = -1;

        last_node->prev->next = NULL;
        free(last_node);
        status = 1;
        return (status);
}

/**
* delete_first_node - deletes the first node in a list
* @head: address of the pointer to a doubly linked list
* Return: Always 1 to signify success
*/
int delete_first_node(dlistint_t **head)
{
	dlistint_t *current_node = *head;
	int status = -1;

	/*one node remaining*/
	if ((*head)->next == NULL)
	{
		*head = NULL;
		free(current_node);
		status = 1;
		return (status);
	}
	(*head)->next->prev = NULL;
	*head = (*head)->next;
	free(current_node);
	status = 1;
	return (status);
}

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list
 * @head: address of a pointer that points to a doubly
 * linked list
 * @index: position of node in list to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int i = 0;
	int status = -1;

	if (!(*head))
		return (status);
	if (index == 0)
	{
		status = delete_first_node(head);
		return (status);
	}
	current_node = current_node->next;

	while (current_node->next)
	{
		i++;
		if (i == index)
		{
			current_node->prev->next = current_node->next;
			current_node->next->prev = current_node->prev;
			free(current_node);
			status = 1;
			return (status);
		}
		current_node = current_node->next;
	}
	/*last node*/
	if (i == index)
	{
		status = delete_last_node(current_node);
		return (status);
	}
	status = -1;
	return (status);
}
