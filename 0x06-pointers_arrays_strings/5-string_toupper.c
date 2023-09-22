#include "main.h"
#include "string.h"
/**
 * string_toupper - has aparameter called @n
 * @i: stringlllllmlkkkeokdsokd
 * Return: i
 */
char *string_toupper(char *i)
{
	int m = 0;

	if (i[m] != '\0')
	{
		if (i[m] >= 97 && i[m] <= 122)
			i[m] = i[m] - 32;
		m++;
	}

	return (i);
}
