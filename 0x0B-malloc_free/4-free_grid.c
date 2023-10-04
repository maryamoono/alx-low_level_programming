#include "main.h"
#include <stdlib.h>
/**
 * free_grid - fmkbi oiur klf
 * @grid: fkokv nbjhg
 * @height: kdkif oim kf
 * Return: rghbn kfii
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			height--;
			free(grid[height]);
			free(grid);
		}
	}
}
