#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - kio lol
 * @width: wkmdkm vf
 * @height: dldm oko
 * Return: kswlklwkd
 */
int **alloc_grid(int width, int height)
{
	int **nim;
	int m, s;

	if (width < 1 || height < 1)
		return (NULL);

	nim = malloc(height * sizeof(int *));

	if (nim == NULL)
	{
		free(nim);
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		nim[m] = malloc(width * sizeof(int));
		if (nim[m] == NULL)
		{
			for (m--; m >= 0; m--)
				free(nim[m]);
			free(nim);
			return (NULL);
		}
	}
	for (m = 0 ; m < height ; m++)
	{
		for (s = 0 ; s < width ; s++)
		{
			nim[m][s] = 0;
		}
	}
	return (nim);
}
