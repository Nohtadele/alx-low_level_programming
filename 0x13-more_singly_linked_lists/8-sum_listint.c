#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the listint_t list
 * Return: sum of all nodes or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
