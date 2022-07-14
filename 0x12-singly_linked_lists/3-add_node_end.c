#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function
 * Description: adds a new node at the end of a list_t list
 * @head: a pointer to the list_t struct member head
 * @str: The string to be added to the list_t
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *cp;
	int len;
	list_t *new, *lst;

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
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		lst = *head;
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = new;
	}

	return (*head);
}
