#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function
 * Description: Merge all the string arguments passed
 * @ac:
 * @av:
 * Return: a pointer to the new string or else NULL
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			size++;
		}
	}
	s = malloc(sizeof(char) * (size + ac));
	if (s == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			s

