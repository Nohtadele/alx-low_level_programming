#include "main.h"

/**
 * swap_int - function
 * Description: swap the value of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: Nothing to return
 */
void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
