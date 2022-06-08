#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - function
 * Description: Print the first 98 fevonacci numbers
 * Return: 0 - success
 */
int main(void)
{
	int i;
	int f1 = 0, f2 = 1, f3;

	f3 = f1 + f2;
	printf("%d, %d, %d, ", f1, f2, f3);
	for (i = 1 ; i < 96 ; i++)
	{
		printf("%f, ", (f3 * pow(1.618, i)));
		if (i == 95)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
