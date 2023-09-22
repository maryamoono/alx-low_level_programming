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
	int s;

	while (s = 0; s < n && src[s] != '\0'; s++)
	{
		dest[s] = src[s];
	}
	for ( ; s < n; i++)
		dest[s] = '\0';

	return (dest);
}
