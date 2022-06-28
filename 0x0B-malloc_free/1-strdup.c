#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 * Description: copy a string to the newly allocated memory
 * @str: a pointer to the string address
 * Return: a pointer to the new string
 */
char *_strdup(char *str)
{
	int size, i;
	char *new_str, *tmp;

	if (str == NULL)
		return (NULL);
	size = 0;
	tmp = str;
	while (*tmp)
	{
		size++;
		tmp++;
	}
	new_str = malloc(sizeof(char) * size);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	for (i = 0 ; i < size ; i++)
		new_str[i] = str[i];
	return (new_str);
}
