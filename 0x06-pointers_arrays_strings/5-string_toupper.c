#include "main.h"
/**
 * string_toupper - has aparameter called @n
 * @m: stringlllllmlkkkeokdsokd
 * Return: m
 */
char *string_toupper(char *m)
{
	int lamon = 0;

	while (*(m + lamon) != '\0')
	{
		if ((*(m + lamon) >= 97) && (*(m + lamon) <= 122))
			*(m + lamon) = *(m + lamon) - 32;
		lamon++;
	}

	return (m);
}
