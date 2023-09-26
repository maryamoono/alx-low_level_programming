#include "main.h"
#include "stdio.h"
#include "string.h"
/**
 * _strspn - i dont know njjbhbbb mbbnm
 * @s: tmama
 * @accept: tmama
 * Return: aletter
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, o;
	unsigned int spn = 0;
	unsigned int found = 0;

	for (m = 0 ; m < strlen(s) ; m++)
	{
		for (o = 0 ; o < strlen(accept) ; o++)
		{
			if (s[m] == accept[o])
			{
				found = 1;
				break;
			}
		}
		if (found)
			spn++;
		else
			break;
		found = 0;
	}
	return (spn);
}
