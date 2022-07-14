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
	char *cp;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	cp = strdup(str);
	if (cp == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = cp;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}
