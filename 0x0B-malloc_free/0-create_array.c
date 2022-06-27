#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 * Description: create an array of chars and initialize with a specific char
 * @size: the size of the array
 * @c: specific character to replace
 * Return: the location of the initial array, or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		*(arr + i) = c;
	return (arr);
}
