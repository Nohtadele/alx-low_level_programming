#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function pointer
 * Description: Prints the given name with UC or As it is
 * @name: a pointer to the string of input
 * @f: a function pointer to any of the functions it is called
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
