#include "main.h"

/**
 * flip_bits - count the number of bits needed to flip to get the second number
 * @n: initial given number
 * @m: number to get after flipping bits
 * Return: return the number of bits needed to flip to get the second number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, bit_count = 0;

	x = n ^ m;
	while (x > 0)
	{
		bit_count += (x & 1);
		x >>= 1;
	}
	return (bit_count);
}
