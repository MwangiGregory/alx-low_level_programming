#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer that points to a listint_t list
 * @idx: index of the list where the new node should be added
 * @n: intger
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node = NULL;
	listint_t *temp = NULL;
	unsigned int i = 0;

	current_node = *head;
	while (i < (idx - 1))
	{
		current_node = current_node->next;
		i++;
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = current_node->next;
	current_node->next = temp;

	return (temp);
}
