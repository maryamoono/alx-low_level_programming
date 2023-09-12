#include "main.h"

/**
 * _isalpha - return 1 or 0
 *
 * @c: The character have to be checked
 *
 * Return:Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
