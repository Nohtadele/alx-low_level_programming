#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function
 * Description: allocates memory using malloc
 * @b: the number of memory block to be allocated
 * Return: a pointer to the allocated memory or exit value 98
 */
void *malloc_checked(unsigned int b)
{
	void *mem_ptr;

	mem_ptr = malloc(b);
	if (mem_ptr == NULL)
		exit(98);
	return (mem_ptr);
}
