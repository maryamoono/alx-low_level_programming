#include "main.h"
/**
 * _print_rev_recursion - it want word in back side
 * @s: help us to print the word
 * return: omg
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
