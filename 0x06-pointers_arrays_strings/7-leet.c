#include "main.h"
/**
 * leet - ka;am 5rmb barm
 * @p: its p hust p
 * Return: i will see next
 */

char *leet(char *p)
{
	int lemn = 0, g;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(p + lemn) != '\0')
	{
		for (g = 0; g < 5; g++)
		{
			if (*(p + lemn) == low_letters[g] || *(p + lemn) == upp_letters[g])
			{
				*(p + lemn) = numbers[g];
				break;
			}
		}
		lemn++;
	}

	return (p);
}
