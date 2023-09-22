#include "main.h"
#include "string.h"
/**
 * _strcat - tow strings
 * @dest: the code
 * @src: another code
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int m = 0;
	int s = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	m++;
	while (src[s] != '\0')
	{
		dest[m] = src[s];
		s++;
		m++;
	}
	dest[s] = '\0';
	return (dest);
}
