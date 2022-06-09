#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - sums of all the data (n) of a
 * dlistint_t linked list
 * @head: pointer to a doubly linked list
 * Return: sum of all the data(n) of a dlistint_t
 * linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current_node = head;

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
