#include "main.h"
#include <stdio.h>

/**
 * main - counts the number of arguments passed
 *
 * @argc: the number arguments
 * @argv: the pointer to the array of parameter strings
 * Return: 0 if success
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
