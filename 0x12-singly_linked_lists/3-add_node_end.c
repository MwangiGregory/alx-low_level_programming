#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - finds length of a string excluding the null
 * character
 * @str: A pointer to a string
 * Return: length of string str
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - adds a new node at the end of a
 * list_t list
 * @head: Pointer to a pointer, that points to a list_t list
 * @str: Pointer to a string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h = NULL;
	list_t *temp = NULL;

	h = *head;
	if (*head == NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = NULL;
		*head = temp;
	}
	else
	{
		while (h->next)
		{
			h = h->next;
		}
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = NULL;
		h->next = temp;
	}
	return (temp);
}
