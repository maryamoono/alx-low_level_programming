#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - dkc aq
 * @grid: dwdk
 * @height: qwrf
 * Return: nn k
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != 0 && height != NULL)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - flfklf
 * @str: jhink h
 * Return: kkv o
 */
char **strtow(char *str)
{
	char **fam;
	unsigned int m, joy, o, y, sh;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (m = joy = 0; str[m] != '\0'; m++)
		if (str[m] != ' ' && (str[m + 1] == ' ' || str[m + 1] == '\0'))
			joy++;
	aout = malloc((joy + 1) * sizeof(char *));
	if (fam == NULL || joy == 0)
	{
		free(fam);
		return (NULL);
	}
	for (o = sh = 0; o < joy; o++)
	{
		for (m = sh; str[m] != '\0'; m++)
		{
			if (str[m] == ' ')
				sh++;
			if (str[m] != ' ' && (str[m + 1] == ' ' || str[m + 1] == '\0'))
			{
				fam[o] = malloc((m - sh + 2) * sizeof(char));
				if (fam[o] == NULL)
				{
					ch_free_grid(fam, o);
					return (NULL);
				}
				break;
			}
		}
		for (y = 0; sh <= m; sh++, y++)
			fam[o][y] = str[sh];
		aout[o][y] = '\0';
	}
	fam[o] = NULL;
	return (fam);
}
