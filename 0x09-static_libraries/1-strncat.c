#include "main.h"
#include "string.h"
/**
 * _strncat - the code must check
 * @dest: destention
 * @src: source
 * @n: num of bytes
 * Return: dest only
 */
char *_strncat(char *dest, char *src, int n)
{
	int m = 0;
	int s = 0;

	while (dest[m] != '\0')
	{
		m++;
	}

	while (s < n)
	{
		dest[m] = src[s];
		if (src[s] == '\0')
			break;
		m++;
		s++;
	}
	return (dest);
}
