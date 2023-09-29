#include "main.h"
/**
 * _strlen_recursion - no more signal
 * @s: after this error
 * Return: we ca
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - return va
 * @m: efl.d
 * @s1: sam
 * @s2: dls
 * Return: kmo
 */
int comparator(char *m, int s1, int s2)
{
	if (*(m + s1) == *(m + s2))
	{
		if (s1 == s2 || s1 == s2 + 1)
			return (1);
		return (0 + comparator(m, s1 + 1, s2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - the checker code
 * @s: plin
 * Return: as told
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
