#include "main.h"
#include <stdio.h>

/**
 * main - lists all argumets including function name
 *
 * @argc: the number arguments
 * @argv: the pointer to the array of parameter strings
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
