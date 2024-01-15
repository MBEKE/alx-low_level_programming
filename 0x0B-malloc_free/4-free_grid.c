#include <stdlib.h>

/**
 * free_grid - frees a 2D array previously created by the alloc_grid function
 * @grid: 2D array to be freed
 * @height: rows of the grid to be freed
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;
	/* Do nothing if the grid is already NULL or height is 0 */
	if (grid == NULL || height <= 0)
		return;
	/* Free meomory for each row */
	for (i = 0; i < height; i++)
		free(grid[i]);
	/* Free memory for the array pointers */
	free(grid);
}
