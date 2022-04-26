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
	unsigned int len = 0;
	const int num = n;

	len = listint_len(*head);
	if (idx == 0)
		return (add_nodeint(head, num));
	else if (idx == len)
		return (add_nodeint_end(head, num));
	else if (idx > len)
		return (NULL);

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
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer that points to a listint_t list
 * @n: integer
 * Return: Address of the new element, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
