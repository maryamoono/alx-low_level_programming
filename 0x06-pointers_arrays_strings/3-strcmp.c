#include "main.h"
#include "string.h"
/**
 * _strcmp - cmp will cheak
 * @s1: character number one
 * @s2: character number two
 * Return: lo
 */
int _strcmp(char *s1, char *s2)
{
	int q = 0, lo = 0;

	while (lo == 0)
	{
		if ((*(s1 + q) == '\0') && (*(s2 + q) == '\0'))
			break;
		lo = *(s1 + q) - *(s2 + q);
		q++;
	}

	return (lo);
}
