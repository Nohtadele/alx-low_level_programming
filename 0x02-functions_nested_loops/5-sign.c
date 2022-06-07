#include "main.h"

/**
 * print_sign - function
 * Description: Checks whether a sign of a number is +ve or -ve
 * @n: is the passed value of the number to check
 * Return: 1 - positive -1 - negative 0 - zero
 */
int print_sign(int n)
{
	int num = n;

	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		if (num < 0)
		{
			_putchar('-');
			return (-1);
		}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
