#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s, *d, *c, *x;

	s = str_concat("Betty ", "Holberton");
	d = str_concat(NULL, "Holberton");
	c = str_concat("Betty ", NULL);
	x = str_concat(NULL, NULL);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	if (d == NULL)
	{
		printf("failed\n");
		return (1);
	}
	if (c == NULL)
	{
		printf("failed\n");
		return (1);
	}
	if (x == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	printf("%s\n", d);
	printf("%s\n", c);
	printf("%s\n", x);
	free(s);
	free(d);
	free(c);
	free(x);
	return (0);
}
