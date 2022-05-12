#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of
 * a list_t list.
 * @head: Address of a pointer that points to a variable
 * of type list_t.
 * @str: A pointer to a string
 * Return: Address of new element, or NULL if it failed
 */
list_t *add_node(list_t **head,  char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->path = str;
	temp->next = *head;
	*head = temp;

	return (temp);
}

/**
 * free_list - frees a list_t list
 * @head: pointer to a list_t list
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head->next;
		/*free(head->path)*/;
		free(head);
		head = temp;
	}
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to a list
 * Return: Number if nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t no_of_nodes = 0;
	
	if (!temp)
		return (no_of_nodes);
	while (temp)
	{
		no_of_nodes++;
		printf("%s\n", temp->path);
		temp = temp->next;
	}
	return (no_of_nodes);
}
