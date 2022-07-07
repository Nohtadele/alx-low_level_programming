#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the opcode of the program
 * @argc: the number of arguments passed
 * @argv: a pointer to the set of strings passed as a parameter
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int byte_num, i;
	int (*add)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte_num = atoi(argv[1]);
	if (byte_num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0 ; i < byte_num ; i++)
	{
		opcode = *(unsigned char *)add;
		printf("%.2x", opcode);
		if (i == byte_num - 1)
			continue;
		printf(" ");
		add++;
	}
	printf("\n");
	return (0);
}
