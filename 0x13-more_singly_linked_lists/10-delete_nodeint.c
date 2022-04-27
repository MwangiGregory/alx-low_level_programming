#include "lists.h"

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

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * linked list
 * @head: pointer to a pointer that points to a listint_t list
 * @index: position of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *to_be_deleted = NULL;
	listint_t *previous_node = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	/**
	 * checks if index is out-of-bounds
	 */
	if (index >= listint_len(*head))
		return (-1);
	if (index == 0)
	{
		to_be_deleted = *head;
		*head = to_be_deleted->next;
		free(to_be_deleted);
		return (1);
	}
	while (i < index)
	{
		if (i == 0)
			previous_node = *head;
		else
			previous_node = previous_node->next;
		i++;
	}
	to_be_deleted = previous_node->next;
	previous_node->next = to_be_deleted->next;
	free(to_be_deleted);
	return (1);
}
