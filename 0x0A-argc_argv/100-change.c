#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimmum number of coins for a change
 * Description: 25, 10, 5, 2, 1 cent can be used
 * @argc: the number arguments
 * @argv: the pointer to the array of parameter strings
 * Return: 0 if success, 1 if there is no or more than one parameter
 */
int main(int argc, char *argv[])
{
	int i, coin, coin_count;
	int coin_type[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	coin = atoi(argv[1]);
	if (coin < 0)
	{
		printf("0\n");
		return (0);
	}
	coin_count = 0;
	for (i = 0 ; i < 5 ; i++)
	{
		coin_count += coin / coin_type[i];
		if (coin % coin_type[i] == 0)
			break;
		else
			coin = coin % coin_type[i];
	}
	printf("%d\n", coin_count);
	return (0);
}
