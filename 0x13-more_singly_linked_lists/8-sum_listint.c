#include "lists.h"

/**
 * sum_listint - sums all the data in a listint_t linked list
 * @head: pointer to a list
 * Return: sum of all the data(n) of a listint_t linked
 * list, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current_node = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);

	current_node = head;

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
