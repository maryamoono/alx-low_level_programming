#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character or 0 for else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
