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
	int size, i, j;
	char *mrg;

	size = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] ; i++)
		size++;
	for (i = 0 ; s2[i] ; i++)
		size++;
	mrg = malloc(sizeof(char) * (size + 1));
	if (mrg == NULL)
		return (NULL);
	j = 0;
	for (i = 0 ; s1[i] ; i++)
	{
		mrg[j] = s1[i];
		j++;
	}
	for (i = 0 ; s2[i] ; i++)
	{
		mrg[j] = s2[i];
		j++;
	}
	mrg[j] = '\0';
	return (mrg);
}
