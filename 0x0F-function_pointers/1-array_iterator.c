#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function pointer
 * Description:
 * @array: a pointer to the array
 * @size: size of the array
 * @action: a pointer to any of the functions
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
