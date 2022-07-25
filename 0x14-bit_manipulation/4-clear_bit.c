#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to a given number
 * @index: Index of the bit to be flipped
 * Return: 1 if worked or -1 if error occur
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bi;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	bi = *n >> index;
	if ((bi & 1) == 0)
		*n &= (1 << index);
	else
		*n ^= (1 << index);
	return (1);
}
