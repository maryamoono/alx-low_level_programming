#include "main.h"
#include <stdlib.h>
/**
 * _realloc - sdjsj
 * @ptr: dsdl;
 * @old_size: nm bvg
 * @new_size: sx
 * Return: iolllll
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int v, non = new_size;
	char *o = ptr;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	if (new_size > old_size)
		non = old_size;
	for (v = 0; v < non; v++)
		s[v] = oldp[v];
	free(ptr);
	return (s);
}
