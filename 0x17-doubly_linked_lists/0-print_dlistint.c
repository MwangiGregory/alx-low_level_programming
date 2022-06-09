#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to a doubly linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *hd = h;
	size_t n = 0;

	while (hd)
	{
		printf("%d\n", hd->n);
		n++;
		hd = hd->next;
	}
	return (n);
}
