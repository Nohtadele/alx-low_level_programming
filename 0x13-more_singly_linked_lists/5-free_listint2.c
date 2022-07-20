#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free memory of listint_t list, set head to NULL
 * @head: pointer to the head of the listint_t list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *free_tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		free_tmp = (*head)->next;
		free(*head);
		*head = free_tmp;
	}
	head == NULL;
}
