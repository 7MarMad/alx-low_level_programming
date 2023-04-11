#include<stdlib.h>
#include<string.h>

/**
 * free_grid - freeing a 2D array memory
 * @grid: the 2D array
 * @height: height of the grid
 * Return: void
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
