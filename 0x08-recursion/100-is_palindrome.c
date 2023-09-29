#include "main.h"
/**
 * _strlen_recursion - dekdekd;ke;d
 * @s: demkelkdl;k;
 * Return: deeldl;;;l
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - nm,n,mn,sn
 * @m: efl.mf.mf.mf.
 * @s1: mlkmlkm
 * @s2: dede;ld,;e,d;e
 * Return: mdlmdlemdl
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
 * is_palindrome - sla,sla,sl,sl;s,;
 * @s: lkjslkoaks
 * Return: amslasmlksm
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
