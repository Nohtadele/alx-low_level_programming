#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the given index n'th node of a listint_t
 * @head: pointer to the head of the listint_t list
 * @index: the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list or NULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
