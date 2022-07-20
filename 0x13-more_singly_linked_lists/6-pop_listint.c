#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the listint_t list
 * Return: the head node’s Integer data
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;
	return (n);
}
