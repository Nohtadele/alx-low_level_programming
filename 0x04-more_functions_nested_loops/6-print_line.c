#include "main.h"

/**
 * print_line - function
 * Description: Print line n times
 * Return: Nothing to return
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		_putchar('_');
	_putchar('\n');
}
