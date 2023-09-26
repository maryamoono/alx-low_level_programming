#include "main.h"
#include "string.h"
/**
 * cap_string - capitalizion words
 * @r: from string that input
 * Return: alwayes dest
 */

char *cap_string(char *r)
{
	int lem = 0, e;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(r + lem) >= 97 && *(r + lem) <= 122)
		*(r + lem) = *(r + lem) - 32;
	lem++;
	while (*(r + lem) != '\0')
	{
		for (e = 0; e < 13; e++)
		{
			if (*(r + lem) == sep_words[e])
			{
				if ((*(r + (lem + 1)) >= 97) && (*(r + (lem + 1)) <= 122))
					*(r + (lem + 1)) = *(r + (lem + 1)) - 32;
				break;
			}
		}
		lem++;
	}
	return (r);
}
