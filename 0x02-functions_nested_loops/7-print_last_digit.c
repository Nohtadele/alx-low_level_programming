#include "main.h"
/**
 * print_last_digit - function
 * Description: Print last digit of a given number
 * @r: is the passed value of the number to check
 * Return: the value of the last digit
 */
int print_last_digit(int r)
{
	int num = r;
	int last_digit;

	if (num < 0)
		last_digit = (num % 10) * -1;
	else
		last_digit = num % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
