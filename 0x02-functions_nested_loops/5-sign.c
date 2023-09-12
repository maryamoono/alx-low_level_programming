#include "main.h"
/**
 * print_sign - prints + 0 -
 *
 * @n: integer parameter
 *
 * Return: + for lowercase number 0 for zero - less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
