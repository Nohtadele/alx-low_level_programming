#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - function
 * Description: prints all the given numbers
 * @separator: a string to separate two numbers
 * @n: number of arguments/numbers
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num_print;

	va_start(num_print, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(num_print, int));
		if (i + 1 != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num_print);
}
