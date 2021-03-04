#include <stdlib.h>
#include "holberton.h"
/**
* free_grid - C - malloc, free
* @grid: 2 dimensional grid previously created
* @height: height of grid
*
* Description: Function that frees a 2 dimensional
* grid previously created by your alloc_grid function.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = height; i >= 0; i--)
	{
		free(*(grid + i));
	}
	free(grid);
}
