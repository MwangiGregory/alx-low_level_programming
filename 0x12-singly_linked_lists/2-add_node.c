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
 * add_node - adds a new node at the beginning of
 * a list_t list.
 * @head: A pointer to a pointer, that points to a variable
 * of type list_t.
 * @str: A pointer to a string
 * Return: Address of new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
