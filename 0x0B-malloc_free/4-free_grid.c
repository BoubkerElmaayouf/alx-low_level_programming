#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function that frees a 2 dimensional
 * @grid: 2 dimension grid
 * @height: height dimension of the grid
 * Return: its a void function (nothing)
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

