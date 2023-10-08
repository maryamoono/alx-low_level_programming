#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - if you wany
 * @s2: uyhf
 * @s1: lol
 * @n: ikl ll
 * Return: mkfm lel
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned long int o;
	unsigned int m;
	char *t;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	t = malloc(strlen(s1) + n + 1);
	if (t == 0)
		return (NULL);
	for (m = 0 ; m < strlen(s1) ; m++)
		t[m] = s1[m];
	for (o = 0 ; o < n ; o++)
	{
		t[m] = s2[o];
		m++;
	}
	t[m] = '\0';
	return (t);
}
