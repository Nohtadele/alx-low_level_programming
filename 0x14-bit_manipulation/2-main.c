#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);
	n = get_bit(9, 3);
	printf("%d\n", n);
	n = get_bit(9, 4);
	printf("%d\n", n);
	n = get_bit(9, 5);
	printf("%d\n", n);
	n = get_bit(9, 6);
	printf("%d\n", n);
	n = get_bit(9, 7);
	printf("%d\n", n);
	n = get_bit(9, 8);
	printf("%d\n", n);
	n = get_bit(9, 9);
	return (0);
}
