#include "main.h"

/**
* free_grid - function that frees a 2 dimensional grid
* @grid: pointer to a pointer to int
* @height: height of the array
* Return: Nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
