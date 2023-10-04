#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -free 2 dimensional grid previously created by your alloc_grid
 * @grid: 2 dimension grid
 * @height: height dimension of grid
 * description:  frees a 2 dimensional grid
 *
 * Return: nothing
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
