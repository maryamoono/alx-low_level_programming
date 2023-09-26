#include "main.h"
#include "string.h"
/**
 * cap_string - capitalizion words
 * @s: from string that input
 * Return: alwayes dest
 */

char *cap_string(char *s)
{
	char *cap_string(char *s)
{
	int count = 0, y;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + count) >= 97 && *(s + count) <= 122)
		*(s + count) = *(s + count) - 32;
	count++;
	while (*(s + count) != '\0')
	{
		for (y = 0; y < 13; y++)
		{
			if (*(s + count) == sep_words[i])
			{
				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (s);
