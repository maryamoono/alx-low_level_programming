#include "main.h"
/**
 * _strchr - numnumumun the maitrix moive4
 * @c: catch me if you can
 * @s: idd jksjdksjkdjsk
 * Return: let me think
 */
char *_strchr(char *s, char c)
{
	int u;

	for (u = 0 ; s[u] != '\0'; u++)
	{
		if (s[u] == c)
			return (s + u);
	}
	return ('\0');
}
