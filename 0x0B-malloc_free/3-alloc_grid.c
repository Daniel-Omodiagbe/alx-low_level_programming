#include "main.h"

/**
* **alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: width of array
* @height: height of array
* Return: double pointer or NULL
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(int) * width);
			if (grid[i])
			{
				for (j = 0; j < height; j++)
				{
					grid[i][j] = 0;
				}
			}
			else
			{
				free(grid[i]);
			}
		}
		return (grid);
	}
	return (NULL);
}
