#ifndef SINGLY_LINKED_LIST
#define SINGLY_LINKED_LIST

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: Integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char ch);
size_t print_listint(const listint_t *h);

#endif
