#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to a list
 * Return: Number if nodes
 */
size_t print_list(const list_t *h)
{
	size_t no_of_nodes;
	no_of_nodes = 0;

	while (h)
	{
		no_of_nodes++;
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s", h->len, h->str);
		}
		h = h->next;
		printf("\n");
	}
	return (no_of_nodes);
}
