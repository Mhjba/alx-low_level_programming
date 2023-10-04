#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid -returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **ma;
	int x;
	int y;

	if (width <= 0 || height <= 0)
		return (NULL);

	ma = malloc(sizeof(int *) * height);

	if (ma == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ma[x] = malloc(sizeof(int) * width);
		if (ma[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ma[x]);

			free(ma);
			return (NULL);
		}	
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		ma[x][y] = 0;
	}

	return (ma);
}
