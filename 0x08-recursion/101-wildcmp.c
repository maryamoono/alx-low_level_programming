#include "main.h"
/**
 * wildcmp - lklkdekd;ek
 * @s1: ed,;le,d
 * @s2: mlmeflmlmfl;rmf;r
 * Return: em;lef;l,efl,,f;r
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
