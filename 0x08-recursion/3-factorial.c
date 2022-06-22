#include "main.h"

/**
 * factorial - function
 * Description: prints factorian of a number
 * @n: given number to calculate factorial
 * Return: value of factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (factorial(n - 1) * n);
}
