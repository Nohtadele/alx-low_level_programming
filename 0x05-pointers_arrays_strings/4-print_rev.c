#include "main.h"
#include <stdio.h>

/**
 * print_rev - function
 * Description: Print string in reverse
 * @str: pointer points to the string value
 * Return: nothing
 */
void print_rev(char *str)
{
	int i, j;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	for (j = i - 1 ; j >= 0 ; j--)
		_putchar(*(str + j));
	_putchar('\n');
}
