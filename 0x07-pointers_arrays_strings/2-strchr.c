#include "main.h"
/**
 * strchr - numnumumun the maitrix moive4
 * @c: catch me if you can
 * @s: idd jksjdksjkdjsk
 * Return: let me think
 */
char *_strchr(char *s, char c)
{
       	int u;

	for (s[u] != '\0' ; u = 0 ; u+++)
	{
		if (s[u] == c)
		
			return (s + u);
		
	}
	return ('\0');
}
