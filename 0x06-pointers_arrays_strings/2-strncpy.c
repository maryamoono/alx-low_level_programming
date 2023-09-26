#include "stdio.h"
#include "main.h"
#include "string.h"
/**
 * _strncpy - copy strings
 * @dest: the destention
 * @src: the sourse
 * @n: numbers of bytes
 * Return: dest only
 */
char *_strncpy(char *dest, char *src, int n)
{
	int q;

	for (q = 0; q < n && src[q] != '\0'; q++)

		dest[q] = src[q];

	for ( ; q < n; q++)
		dest[q] = '\0';

	return (dest);
}
