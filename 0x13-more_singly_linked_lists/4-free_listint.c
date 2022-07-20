#include "lists.h"

/**
 * free_listint - free memory of listint_t list
 * @head: pointer to the head of the listint_t list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *free_tmp;

	while (head)
	{
		free_tmp = head->next;
		free(head);
		head = free_tmp;
	}
}
