#include "main.h"
#include "string.h"
/**
 * *_stract =  tow strings
 * @dest= the code
 * @src= another code
 * Return= dest
 */
char *_strcat(char *dest, char *src)
{
	int m;
	int s;
	
	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	while ( src[s] != '\0')
	{
		s = 0;

		s++;
		dest[m] = src[s];
	}
	return (dest);
}
