#include "main.h"

/**
 * _print_rev_recursion - function
 * Description: Prints a string in reverse recurssively
 * @s: a pointer to the string value address
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
