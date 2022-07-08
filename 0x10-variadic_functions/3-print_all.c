#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_char(va_list all_str);
void print_int(va_list all_str);
void print_fraction(va_list all_str);
void print_str(va_list all_str);

/**
 * print_all - function
 * Description: prints all the given string and numbers
 * @format: ncharacter type with string value
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list all_str;
	char *tmp_sep = "";

	func_list functions[] = {{"c", print_char},
		{"i", print_int},
		{"f", print_fraction},
		{"s", print_str}};

	va_start(all_str, format);
	i = 0;
	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(functions[j].sym)))
			j++;
		if (j < 4)
		{
			printf("%s", tmp_sep);
			functions[j].func_ptr(all_str);
			tmp_sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(all_str);
}

/**
 * print_char - prints a char data type
 * @all_str: list of argumets passed, a pointer to the character to print
 * Return: Nothing
 */
void print_char(va_list all_str)
{
	char ch;

	ch = va_arg(all_str, int);
	printf("%c", ch);
}

/**
 * print_int - prints integer number
 * @all_str: list of argumets passed, a pointer to the integer to print
 * Return: Nothing
 */
void print_int(va_list all_str)
{
	int integer;

	integer = va_arg(all_str, int);
	printf("%d", integer);
}

/**
 * print_fraction - prints fraction numbers
 * @all_str: list of argumets passed, a pointer to the fraction to print
 * Return: Nothing
 */
void print_fraction(va_list all_str)
{
	float frac;

	frac = va_arg(all_str, double);
	printf("%f", frac);
}

/**
 * print_str - prints strings
 * @all_str: list of argumets passed, a pointer to the string to print
 * Return: Nothing
 */
void print_str(va_list all_str)
{
	char *str;

	str = va_arg(all_str, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
