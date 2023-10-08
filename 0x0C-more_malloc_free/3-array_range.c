#include "main.h"
#include <stdlib.h>
/**
 * array_range - dwdy
 * @min: jdekh
 * @max: asyas klc
 * Return: whwdh kj
 */
int *array_range(int min, int max)
{
	int *e;
	int m, o = 0;

	if (min > max)
		return (NULL);
	e = malloc((max - min + 1) * sizeof(int));
	if (e == NULL)
		return (NULL);
	for (m = min ; m <= max ; m++)
	{
		e[o] = m;
		o++;
	}
	return (e);
}
