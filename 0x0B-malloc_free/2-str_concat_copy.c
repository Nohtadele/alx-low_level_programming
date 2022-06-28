#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function
 * Description: Merge two string
 * @str: a pointer to the string address
 * Return: a pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, i2;
	char *mrg_str;

	size1 = 0;
	size2 = 0;
	for (i = 0 ; s1[i] ; i++)
		size1++;
	for (i = 0 ; s2[i] ; i++)
		size2++;
	mrg_str = malloc(sizeof(char) * (size1 + size2 + 1));
	if (mrg_str == NULL)
		return (NULL);
	i2 = 0;
	for (i = 0 ; i < size1 + size2 ; i++)
	{
		if(i < size1)
			mrg_str[i] = s1[i];
		else
			mrg_str[i] = s2[i2++];
	}
	mrg_str[size1 + size2] = '\0';
	return (mrg_str);
}
