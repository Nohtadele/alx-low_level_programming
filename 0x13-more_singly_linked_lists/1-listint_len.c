#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: pointer to the head of linked list, listint_t
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t no_nodes = 0;

	while (h)
	{
		no_nodes++;
		h = h->next;
	}
	return (no_nodes);
}
