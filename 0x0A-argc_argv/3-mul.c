#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: the number arguments
 * @argv: the pointer to the array of parameter strings
 * Return: 0 if success, 1 if less than two arguments
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		for (i = 1; i < argc ; i++)
			mul *= atoi(*(argv + i));
	printf("%d\n", mul);
	return (0);
}
