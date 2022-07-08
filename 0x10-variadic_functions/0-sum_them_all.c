#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - function
 * Description: sum all the given numbers
 * @n: number of arguments/numbers
 * Return: Sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list s;

	if (n == 0)
		return (0);
	va_start(s, n);
	for (i = 0 ; i < n ; i++)
		sum += va_arg(s, int);
	va_end(s);
	return (sum);
}
