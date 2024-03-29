#include "main.h"

/**
 * get_bit - finds the value of a bit at a given index
 * @n: given number
 * @index: Index of the bit to be returned
 * Return: value of a bit at a given index or -1 if error occur
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	n >>= index;
	return (n & 1);
}
