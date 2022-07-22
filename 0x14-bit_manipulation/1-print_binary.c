#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: given number
 * Return: Binary string characters
 */
void print_binary(unsigned long int n)
{
	int div = n;

	while (div != 1)
	{
		div /= 2;
		rem = div % 2;
		_putchar(rem);
	}
}
int binary_rec(int div)
{
	if (div == 1)
	{
		_putchar(div);
		return;
	}
	div /= 2;
	rem = div % 2;
	_putchar(binary_rec(div));
}
