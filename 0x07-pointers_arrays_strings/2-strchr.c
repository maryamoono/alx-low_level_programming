#include "main.h"
/**
 * strchr - numnumumun the maitrix moive4
 * @c: catch me if you can
 * @s: idd jksjdksjkdjsk
 * Return: let me think
 */
char *_strchr(char *s, char c)
{
	unsigned int h = 0;
	char *v;

	while (s[h] != '\0')
	{
		if (s[h] == c)
		{
			v = &s[h];
			return (v);
		}
	}
	return ('\0');
}
	
