#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function
 * Description: Merge all the string arguments passed
 * @ac: Number of argumets passed
 * @av: A pointer to the strings pointer collection
 * Return: a pointer to the new string or else NULL
 */
char *argstostr(int ac, char **av)
{
	char *s, *tmp;
	int i, j, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0 ; i < ac ; i++)
		for (j = 0 ; av[i][j] ; j++)
			size++;
	s = malloc(sizeof(char) * (size + ac + 1));
	tmp = s;
	if (tmp == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			*tmp = av[i][j];
			tmp++;
		}
		*tmp = '\n';
		tmp++;
	}
	*tmp = '\0';
	return (s);
}
