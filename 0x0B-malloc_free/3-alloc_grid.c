#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function
 * Description: Allocate memory for multi dimentional array
 * @width: size of raw of matrix
 * @height: size of column of matrix
 * Return: a pointer to a new two dimentional array
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int hi, wi;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);
	for (hi = 0 ; hi < height ; hi++)
	{
		matrix[hi] = malloc(sizeof(int) * width);
		if (matrix[hi] == NULL)
		{
			while (hi >= 0)
			{
				free(matrix[hi]);
				hi--;
			}
			free(matrix);
			return (NULL);
		}
	}
	for (hi = 0 ; hi < height ; hi++)
		for (wi = 0 ; wi < width ; wi++)
			matrix[hi][wi] = 0;
	return (matrix);
}
