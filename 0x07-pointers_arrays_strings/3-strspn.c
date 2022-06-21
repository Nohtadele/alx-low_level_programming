#include "main.h"
#include <stddef.h>

/**
 * _strspn - function
 * Description: counts characters which dont match the given string characters
 * @s: the given string
 * @accept: Character to avoid
 * Return: number of characters which dont match the second string characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag, count;

	count = 0;
	i = 0;
	while (s[i] > '\0')
	{
		flag = 0;
		for (j = 0 ; accept[j] && accept[j] > '\0' ; j++)
		{
		if (*(s + i) == accept[j])
		{
			flag++;
			break;
		}
		}
		i++;
		if (flag == 0)
			count++;
	}
	return (count);
}
