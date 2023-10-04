#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - nvhbgf on nc
 * @str: i know as astring
 * Return: null if null
 */
char *_strdup(char *str)
{
	unsigned int t;
	char *s;

	if (str == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * strlen(str) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (t = 0 ; t <= strlen(str) ; t++)
	{
		s[t] = str[t];
	}
	return (s);
}
