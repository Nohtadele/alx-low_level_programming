#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function
 * Description: the number of elements in a linked list
 * @h: a pointer to the list_t struct member head
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t mem = 0;

	while (h)
	{
		mem++;
		h = h->next;
	}
	return (mem);
}
