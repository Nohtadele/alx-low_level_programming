#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - checks the code
 * @argc: the number of arguments passed
 * @argv: a pointer to the array of parameters string passed
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	operator = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' && y == 0) || (*operator == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(operator)(x, y);
	printf("%d\n", result);
	return (0);
}
