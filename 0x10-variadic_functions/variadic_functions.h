#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printall - structure
 * Description: contains the variables of the datatype symbol and
 *		its corresponding function
 * @sym: the specific character symbol for the corresponding function
 * @func_ptr: the corresponding datatype function pointer
 */
typedef struct printall
{
	char *sym;
	void (*func_ptr)(va_list all_str);
} func_list;

#endif
