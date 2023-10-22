#include <string.h>
#include "main.h"
/**
 * _strstr - mflkmflkmflemflmlfmlf
 * @haystack: deffrfrggfgddf
 * @needle: fefjelkjflkeflemflkemfkemf
 * Return: fflef
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int k, r = 0, q = 0;
	unsigned int len = strlen(needle);

	for (k = 0 ; k < strlen(haystack) ; k++)
	{
		if (haystack[k] == needle[r])
		{
			if (r == 0)
				q = k;
			r++;
			if (r == len)
				break;
		}
		else
		{
			r = 0;
			q = 0;
		}
	}
	if (r == len)
		return (haystack + q);
	else
		return ('\0');
}
