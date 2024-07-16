#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory
 * @grid: address of grid
 * @height: height of grid
 * 
 * Return: void (nothing)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}

	free(grid);
}

