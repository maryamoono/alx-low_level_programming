#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - on this way
 * @s1: is iway
 * @s2: i domt
 *
 * Return: iujhy
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int m, a, o;
	char *y;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	o = strlen(s1) + strlen(s2);
	y = malloc(sizeof(char) * o + 1);

	if (y == 0)
	{
		return (NULL);
	}
	for (a = 0 ; a < strlen(s1) ; a++)
	{
		y[a] = s1[a];
	}
	for (m = 0 ; m < strlen(s2) ; m++)
	{
		y[a] = s2[m];
		a++;
	}
	return (y);
}
