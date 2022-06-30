#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function
 * Description: allocates a memory for an array using malloc
 * @nmemb: size of array
 * @size: size of the variable / Butes
 * Return: a pointer to the allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr_mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr_mem = malloc(size * nmemb);
	if (arr_mem == NULL)
		return (NULL);
	for (i = 0 ; i < (nmemb * size) ; i++)
		arr_mem[i] = '\0';
	return (arr_mem);
}

