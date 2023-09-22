#include "main.h"
#include "string.h"
/**
 * cap_string - capitalizion words
 * @s: from string that input
 * Return: alwayes dest
 */

char *cap_string(char *s)
{
	int words = 0;
	int words[] = {'\t'||'\n'||','||';'||'.'||'!'||'?'||'"'||'('||')'||'{'||'}'};

	while (stam[words] >= 97 && stam[words] <= 122)
		str[words] = str[words] - 32;
	words++;
	while (stm[words] != '\0')
	{
		for (q = 0; q < 13; q++)
		{
			if (stam[words] == words[q])
			{
				if (str[words] + 1 >= 97 && (str[words] + 1 <= 122)
					str[words] + 1 = str[words] + 1 - 32;
				break;
			}
		}
		words++;
	}
	return (s);
}
