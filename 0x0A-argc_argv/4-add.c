#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: the number arguments
 * @argv: the pointer to the array of parameter strings
 * Return: 0 if success, 1 if a character found in the arguments
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc ; i++)
		{
			for (j = 0 ; argv[i][j] ; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(*(argv + i));
		}
	printf("%d\n", sum);
	}
	return (0);
}
