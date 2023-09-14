#include <stdio.h>
/**
 * _isdigit - the gode must cheak
 *
 * @c: is ASCII
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
