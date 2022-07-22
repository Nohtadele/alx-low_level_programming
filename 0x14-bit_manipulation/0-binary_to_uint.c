#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Binary number, a pointer to a string of 0 and 1 chars
 * Return: the converted unsigned int number or 0 if given input is NULL
 *	or if there is a character in the given string other than 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binr = 1, dec = 0;
	int len = -1;
	const char *temp = b;

	if (b == NULL)
		return (0);
	while (*temp)
	{
		len++;
		temp++;
	}
	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		dec += (b[len] - '0') * binr;
		binr *= 2;
		len--;
	}
	return (dec);
}
