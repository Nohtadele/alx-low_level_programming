#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of linked list, listint_t
 * Return: number of nodes in the listint_t
 */
size_t print_listint(const listint_t *h)
{
	size_t no_nodes = 0;

	while (h)
	{
		no_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (no_nodes);
}
