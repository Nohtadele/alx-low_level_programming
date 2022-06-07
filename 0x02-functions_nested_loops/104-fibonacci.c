#include "main.h"
#include <stdio.h>
<<<<<<< HEAD
#include <math.h>
=======
>>>>>>> 78c0a85... first 100 febonacci numbers

/**
 * main - function
 * Description: Print the first 98 fevonacci numbers
 * Return: 0 - success
 */
int main(void)
{
	int i;
<<<<<<< HEAD
	int f1 = 0, f2 = 1, f3;

	f3 = f1 + f2;
	printf("%d, %d, %d, ", f1, f2, f3);
	for (i = 1 ; i < 96 ; i++)
	{
		printf("%f, ", (f3 * pow(1.618, i)));
		if (i == 95)
=======
	int f1 = 0, f2 = 1, sum;

	for (i = 0 ; i < 98 ; i++)
	{
		sum = f1 + f2;
		printf("%d", sum);
		f1 = f2;
		f2 = sum;
		if (i == 97)
>>>>>>> 78c0a85... first 100 febonacci numbers
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
