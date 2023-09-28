#include "main.h"
/**
 * _strlen_recursion - lenghth of lenght
 * @s: hey lovley
 * return: always there
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return ('\0');
	}
	return (1 + _strlen_recursion(s + 1));
}
