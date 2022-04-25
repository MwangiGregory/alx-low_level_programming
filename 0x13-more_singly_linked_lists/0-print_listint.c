#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the next node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *head = h;

	while (head->next)
	{
		printf("%d\n", head->n);
		head = head->next;
		node_count++;
	}
	if (head->next == NULL)
	{
		printf("%d\n", head->n);
		node_count++;
	}
	return (node_count);
}
