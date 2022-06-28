#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function
 * Description: frees the memory of an array which were allocated
 * @grid: a pointer to the array
 * @height: column of array to free
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
