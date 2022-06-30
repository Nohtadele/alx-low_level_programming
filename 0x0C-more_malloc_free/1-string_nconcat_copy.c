#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function
 * Description: Merge two strings using malloc
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * @n: the first n bytes of the second string to merge
 * Return: a pointer to the new memory address or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mrg_str, *tmp;
	unsigned int str1, str2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str1 = 0;
	str2 = 0;
	for (i = 0 ; s1[i] ; i++)
		str1++;
	for (i = 0 ; s2[i] ; i++)
		str2++;
	if (n < str2)
		mrg_str = malloc(sizeof(char) * (str1 + n + 1));
	else
		mrg_str = malloc(sizeof(char) * (str1 + str2 + 1));
	if (mrg_str == NULL)
		return (NULL);
	tmp = mrg_str;
	for (i = 0 ; s1[i] ; i++)
	{
		*tmp = s1[i];
		tmp++;
	}
	if (n < str2)
		for (i = 0 ; i < n ; i++)
		{
			*tmp = s2[i];
			tmp++;
		}
	else
		for(i = 0 ; s2[i] ; i++)
		{
			*tmp = s2[i];
			tmp++;
		}
	*tmp = '\0';
	return (mrg_str);
}
