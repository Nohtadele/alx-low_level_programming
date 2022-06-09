#include "main.h"

/**
 * print_diagonal - function
 * Description: Print line n times
 * @n: Number of redundency to make the line
 * Return: Nothing to return
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j <= i ; j++)
		{
			if (j == i)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
