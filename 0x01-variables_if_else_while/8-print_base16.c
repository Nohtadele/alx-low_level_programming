#include <stdio.h>
/**
 * main - entry point
 * Prints base 16 numbers in lower case
 * Return: 0 success
 */
int main(void)
{
	int num;
	char b16;

	for (num = 0 ; num <= 9 ; num++)
		putchar((num % 10) + '0');
	for (b16 = 'a' ; b16 <= 'f' ; b16++)
		putchar(b16);
	putchar('\n');
	return (0);
}
