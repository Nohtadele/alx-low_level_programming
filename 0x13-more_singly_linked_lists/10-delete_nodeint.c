#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node of specific index from list
 * @head: A pointer to listint_t
 * @index: index of the node to be deleted
 * Return: 1 if succeeded or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *node, *temp;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		node = temp;
		node = node->next;
		temp->next = node->next;
		free(node);
	}
	return (1);
}
