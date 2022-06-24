#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the executable program
 *
 * @argc: the number arguments
 * @argv: the pointer to the array of parameter strings
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
