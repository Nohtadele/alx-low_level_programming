#include "main.h"
#include <stdlib.h>

/**
 * array_range - function
 * Description: create an array of integers
 * @min: the initial / starting value of array
 * @max: the final value of the array
 * Return: a pointer to the new array address or NULL
 */
int *array_range(int min, int max)
{
	int *ptr_arr;
	int i;

	if (min > max)
		return (NULL);
	ptr_arr = malloc(sizeof(int) * (max - min + 1));
	if (ptr_arr == NULL)
		return (NULL);
	for (i = 0 ; i < (max - min + 1) ; i++)
		ptr_arr[i] = min + i;
	return (ptr_arr);
}
