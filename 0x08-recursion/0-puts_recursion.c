#include "main.h"
/**
 * _puts_recursion - loop for ever but can stop it
 * @s: sschar
 * return: nonno
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);

	_puts_recursion(s + 1);
}
