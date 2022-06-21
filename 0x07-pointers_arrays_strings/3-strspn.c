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
	int i, flag;
	unsigned int count;

	count = 0;
	while (*s)
	{
		flag = 0;
		for (i = 0 ; accept[i] && accept[i] > '\0' ; i++)
		{
		if (*s == accept[i])
		{
			flag++;
			break;
		}
		}
		if (flag == 0)
			count++;
		s++;
	}
	return (count);
}
