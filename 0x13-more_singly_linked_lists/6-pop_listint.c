#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list
 * @head: pointer to a pointer that points to a listint_t list
 * Return: 0 if the linked list is empty,otherwise return the
 * head node's data (stored in num)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int num = 0;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	num = (*head)->n;

	free(*head);
	*head = temp;
	return (num);
}
