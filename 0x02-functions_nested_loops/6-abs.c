#include "main.h"
/**
 * print_sign - function
 * Description: Absolute value of a given number
 * @n: is the passed value of the number to check
 * Return: Absolute value of a number
 */
int _abs(int n)
{
	int num = n;

	if (num < 0)
		num = -num;

	return (num);
}
