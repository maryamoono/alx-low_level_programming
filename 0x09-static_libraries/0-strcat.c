#include "main.h"
#include <string.h>
/**
 * _strcat - tow strings
 * @dest: the code
 * @src: another code
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int m = 0;
	int i = strlen(dest);

	while (src[m] != '\0')
	{
		dest[i] = src[m];
		m++;
		i++;
	}
	return (dest);
}
