#include "main.h"
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

	for (o = 0 ; o < n ; o++)
	{
		s[o] = b;
	}
	return (s);
}
