#include "main.h"

/**
 * print_most_numbers - function
 * Description: Print numbers without 2 and 4
 * Return: Nothing to return
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
