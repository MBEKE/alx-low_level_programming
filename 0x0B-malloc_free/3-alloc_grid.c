#include <stdlib.h>

/**
 * alloc_grid - reurns a pointer to a 2D array of ints
 * @height: rows of  the grid
 * @width: columns of the grid.
 *
 * Return: NULL on fairlure, otherwise a pointer to the 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	/* Check and return NULL if width/height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* Allocate memory for the array of pointers */
	grid = (int **)malloc(height * sizeof(int *));
	/* Check if Memory allocation is successful */
	if (grid == NULL)
		return (NULL);
	/* Allocate memory for each row and initialize elements to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free the previously allocated memory if allocation fails */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		/* Initialize elements to 0 */
		for (j = 0; j < width; j++)
			grid[i][i] = 0;
	}
	return (grid);
}

