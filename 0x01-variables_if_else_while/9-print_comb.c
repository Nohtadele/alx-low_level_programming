#include <stdio.h>
/**
 * main - entry point
 * Prints single digit numbers of base 10 starting from 0
 * Return: 0 success
 */
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar((num % 10) + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
