#include "main.h"
#include <stdlib.h>
/**
 * _calloc - udtd
 * @nmemb: dfef
 * @size: wek;
 * Return: doedf
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;
	unsigned int f;

	if (nmemb == 0 || size == 0)
		return (NULL);
	k = malloc(nmemb * size);
	if (k == NULL)
		return (NULL);
	for (f = 0 ; f < nmemb * size ; f++)
		k[f] = 0;
	return (k);
}
