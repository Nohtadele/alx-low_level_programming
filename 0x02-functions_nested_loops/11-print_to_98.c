#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function
 * Description: Print the numbers from "n" to 98 or from 98 to "n"
 * @n: The starting number to get to 98
 * Return: 0 success
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else
		if (n > 98)
		{
			for (i = n ; i >= 98 ; i--)
			{
				printf("%d", i);
				if (i != 98)
					printf(", ");
			}
			printf("\n");
		}
		else
			printf("%d\n", n);
}
