#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - function
 * Description: prints all the given strings
 * @separator: a string to separate two strings
 * @n: number of arguments/strings
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str_print;
	char *tmp_str;

	va_start(str_print, n);
	for (i = 0 ; i < n ; i++)
	{
		tmp_str = va_arg(str_print, char *);
		if (tmp_str == NULL)
			printf("(nil)");
		else
			printf("%s", tmp_str);
		if (i + 1 != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str_print);
}
