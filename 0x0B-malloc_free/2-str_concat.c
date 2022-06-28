#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function
 * Description: Merge two string
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: a pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *mrg, *tmp;

	size1 = 0;
	size2 = 0;
	for (i = 0 ; s1[i] ; i++)
		size1++;
	for (i = 0 ; s2[i] ; i++)
		size2++;
	if (s1 == NULL)
		size1 = 0;
	if (s2 == NULL)
		size2 = 0;
	mrg = malloc(sizeof(char) * (size1 + size2 + 1));
	tmp = mrg;
	if (mrg == NULL)
		return (NULL);
	for (i = 0 ; i < size1 ; i++)
	{
		*tmp = s1[i];
		tmp++;
	}
	for (i = 0 ; i < size2 ; i++)
	{
		*tmp = s2[i];
		tmp++;
	}
	*tmp = '\0';
	return (mrg);
}
