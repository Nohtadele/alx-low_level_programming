#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function pointer
 * Description:
 * @array: a pointer to the array
 * @size: size of the array
 * @cmp: a pointer to the desired function
 * Return: the index of the first element found, or
 * -1 if array have no element, or if no element matches the search
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
