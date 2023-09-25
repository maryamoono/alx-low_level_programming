#include "main.h"
#include "stdio.h"
/**
 * _memset - the mmems taht want to check out
 * @s: maryam taheeer
 * @b: ossmamamma taheere
 * @n: who are yo
 * Return: always nothing it means s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int o;

	o = 0;
	while (o < n)
	{
		o++;
		s[o] = b;
	}
	return (s);
}
