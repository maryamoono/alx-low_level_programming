#include <string.h>
#include "main.h"
/**
 * _strpbrk - bytes even bytes
 * @s: ,d,.s,d.s,d.s,
 * @accept: cdlmcldmcld,lcdmd
 * Return: imleted
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int u, y;

	for (y = 0 ; y < strlen(s) ; y++)
	{
		for (u = 0 ; u < strlen(accept) ; u++)
		{
			if (s[y] == accept[u])
				return (s + u);
		}
	}
	return ('\0');
}
