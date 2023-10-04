#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creat wgat i can
 * @c: craxk in the line
 * @size: i dont wnhd
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *co;
	unsigned int s;

	if (size == 0)
		return (NULL);

	co = malloc(sizeof(c) * size);

	if (co == NULL)
		return (NULL);

	for (s = 0 ; s < size ; s++)
	{
		co[s] = c;
	}
	return (co);
}
