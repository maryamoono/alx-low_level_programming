#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - kjlwjdl nhn
 * @b: the swlk
 * Return: mk
 */
void *malloc_checked(unsigned int b)
{
	void *l = malloc(b);

	if (l == 0)
		exit(98);
	return (l);
}
