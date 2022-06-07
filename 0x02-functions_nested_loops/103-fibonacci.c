#include "main.h"
#include <stdio.h>

/**
 * main - function
 * Description: Prints the sum of even-valued Fibonacci sequence no more than 4000000
 * Return: 0 - success
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	float total;

	while (1)
	{
		sum = f1 + f2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total = total + sum;
		f1 = f2;
		f2 = sum;
	}
	printf("%.0f\n", total);
	return (0);
}
